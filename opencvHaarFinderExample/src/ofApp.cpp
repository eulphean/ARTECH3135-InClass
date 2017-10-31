#include "ofApp.h"


void ofApp::setup()
{
  grabber.setup(640, 480);
	finder.setup("haarcascade_frontalface_default.xml");
  img.load("pattern.jpeg");
}


void ofApp::update()
{
    grabber.update();

    if (grabber.isFrameNew())
    {
        finder.findHaarObjects(grabber.getPixels());
        
//        for (int i = 0; i < finder.blobs.size(); i++) {
//            // Valid face bounding rectangle.
//            if (finder.blobs[i].boundingRect.getArea() > 150 * 150) {
//                // Face bounding rectangle.
//                ofRectangle rect = finder.blobs[i].boundingRect;
//                
//                // Get the face pixels.
//                facePixels = grabber.getPixels();
//                int startingX = rect.getX();
//                int startingY = rect.getY();
//                int endingX = startingX + rect.getWidth();
//                int endingY = startingY + rect.getHeight();
//                
//                // Go through each pixel in the bounding rectangle and change its
//                // color to grayscale.
//                for (int x = startingX; x <= endingX; x = x + 5) {
//                    for (int y = startingY; y <= endingY; y = y + 5) {
//                        ofColor c = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
//                        ofFill();
//                        ofSetColor(c);
//                        //ofDrawRectangle(x, y, 5, 5);
//                        //int brightness = facePixels.getColor(x, y).getBrightness();
//                        //ofColor color(ofColor::fromHsb(ofRandom(255), 255, 255));
//                        //facePixels.setColor(x, y, color);
//                    }
//                }
//            }
//        }
        faceTexture.loadData(facePixels);
    }
}


void ofApp::draw()
{
    ofFill();
    ofSetColor(255);
    //grabber.draw(0, 0);
    faceTexture.draw(0, 0);

    ofNoFill();
    /*for(unsigned int i = 0; i < finder.blobs.size(); i++)
    {
        // Ignore small v
        if (finder.blobs[i].boundingRect.getArea() > 150 * 150)
        {
            //ofRectangle rect = finder.blobs[i].boundingRect;
            //ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
            //img.draw(rect.getX(), rect.getY(), rect.getWidth(), rect.getHeight());
        }
    }*/
}

