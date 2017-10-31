#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0);
  // This makes sure that the background doesn't update with every frame.
  // This lets our drawing sit on the canvas till we come back to our next frame.
  ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofSetColor(0, 10);
  ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
  
  for (int i = 0; i < 10; i ++) {
    float offsetX = ofRandom(-20, 20);
    float offsetY = ofRandom(-20, 20);
    
    float x = ofGetMouseX() + offsetX;
    float y = ofGetMouseY() + offsetY;
    
    float radius = ofRandom(3, 30);
    
    float grayscale = ofRandom(0, 255);
    
    ofSetColor(grayscale);
    ofDrawCircle(x, y, radius);
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
