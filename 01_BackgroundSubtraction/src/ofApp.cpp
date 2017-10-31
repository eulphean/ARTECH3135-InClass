#include "ofApp.h"


void ofApp::setup()
{
    // Set up our grabber.
    grabber.setup(640, 480);
  
    // We want to make sure the size of the image is same as the size of our screen.
    img.load("fruits.png");
    img.resize(640, 480);

    grayscalePixels.allocate(grabber.getWidth(), grabber.getHeight(), OF_PIXELS_GRAY);
    backgroundPixels.allocate(grabber.getWidth(), grabber.getHeight(), OF_PIXELS_GRAY);
    // (Part 1) Make sure frameToShowPixels supports a 3 channel image.
    frameToShowPixels.allocate(grabber.getWidth(), grabber.getHeight(), OF_PIXELS_RGB);
}

void ofApp::update()
{
    grabber.update();

    if (grabber.isFrameNew())
    {
        // Make the grayscale image from the fresh camera image.
        for (int x = 0; x < grabber.getWidth(); x++)
        {
            for (int y = 0; y < grabber.getHeight(); y++)
            {
                grayscalePixels.setColor(x, y, grabber.getPixels().getColor(x, y).getBrightness());
            }
        }

        // If the spacebar is pressed, save that image as the background image.
        if (ofGetKeyPressed(' ') == true)
        {
            backgroundPixels = grayscalePixels;

        }

        // Subtract the background from the camera grayscale and create the foreground.
        for (int x = 0; x < grabber.getWidth(); x++)
        {
            for (int y = 0; y < grabber.getHeight(); y++)
            {
                int brightnessOfGrayscale = grayscalePixels.getColor(x, y).getBrightness();
                int brightnessOfBackground = backgroundPixels.getColor(x, y).getBrightness();
                int absDiff = std::abs(brightnessOfBackground - brightnessOfGrayscale);

                if (absDiff > subtractionThreshold)
                {
                    // (Part 1) Subtraction threshold met? Set the foreground pixels to RGB pixels from the grabber.
                    frameToShowPixels.setColor(x, y, grabber.getPixels().getColor(x, y));
                }
                else
                {
                    // (Part 1) Subtraction threshold not met? Set that pixel to black.
                    //frameToShowPixels.setColor(x, y, ofColor::black);
                  
                    // (Bonus) Set the background to an image of my choice.
                    frameToShowPixels.setColor(x, y, img.getPixels().getColor(x, y));
                }
            }
        }

        grayscaleTexture.loadData(grayscalePixels);
        backgroundTexture.loadData(backgroundPixels);
        frameToShowTexture.loadData(frameToShowPixels);
    }
}

void ofApp::draw()
{
    int halfWidth = ofGetWidth() / 2;
    int halfHeight = ofGetHeight() / 2;

    grabber.draw(0, 0, halfWidth, halfHeight);
    grayscaleTexture.draw(halfWidth, 0, halfWidth, halfHeight);

    backgroundTexture.draw(0, halfHeight, halfWidth, halfHeight);
    frameToShowTexture.draw(halfWidth, halfHeight, halfWidth, halfHeight);
}
