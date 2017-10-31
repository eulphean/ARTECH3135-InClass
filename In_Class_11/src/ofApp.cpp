#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  grabber.setup(640, 480);
}

//--------------------------------------------------------------
void ofApp::update(){
  grabber.update();
  
  // Grabbed a new frame?
  if (grabber.isFrameNew()) {
    pixel = grabber.getPixels();
    texture.loadData(pixel);
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  // This mirrors the image.
  ofPushMatrix();
  ofTranslate(ofGetWidth(), 0, 0);
  ofScale(-1, 1);
  
  for (int x = 0; x < pixel.getWidth(); x = x + 30) {
    for (int y = 0; y < pixel.getHeight(); y = y + 30) {
      ofColor pixelColor = pixel.getColor(x, y);
      
      float brightness = pixelColor.getBrightness();
      float radius = ofMap(brightness, 0, 255, 2, 10);
      
      ofSetColor(pixelColor);
      ofDrawCircle(x, y, 5);
    }
  }
  
  //texture.draw(0, 0);
}
