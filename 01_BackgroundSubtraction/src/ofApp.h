#pragma once


#include "ofMain.h"


class ofApp: public ofBaseApp
{
public:
    void setup() override;
    void update() override;
    void draw() override;
  
    const int subtractionThreshold = 10;

    ofVideoGrabber grabber;

    // ofImage == ofPixels + ofTexture
    ofPixels grayscalePixels;
    ofTexture grayscaleTexture;

    ofPixels backgroundPixels;
    ofTexture backgroundTexture;

    ofPixels frameToShowPixels;
    ofTexture frameToShowTexture;
  
    ofImage img; 
};
