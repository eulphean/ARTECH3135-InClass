#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  image0.load("flow.png");
  image1.load("prussik.jpg");
  
  ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 10);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
//  
  // Sets the tint of the color.
  // ofSetColor(ofColor::green);
  // image0.draw(0, 0, ofGetWidth(), ofGetHeight());
  // image1.draw(ofGetMouseX(), ofGetMouseY(), 100, 100);
  
  //ofEnableBlendMode(OF_BLENDMODE_ADD);
  
  for (int i = 0; i < 50; i++) {
    // Rainbow hue.
    float hue = ofRandom(0, 255);
    ofSetColor(ofColor::fromHsb(hue, 255, 255));
    
    float x = ofRandom(0, ofGetWidth());
    float y = ofRandom(0, ofGetHeight());
    
    image1.draw(x, y, 100, 100);
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
  image0.draw(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
