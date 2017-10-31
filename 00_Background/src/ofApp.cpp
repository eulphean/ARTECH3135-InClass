#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(ofColor::white);
  ofSetBackgroundAuto(false);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){

  // Trailing effect when you are moving your mouse.
  ofSetColor(ofColor::white, 10);
  ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
  
  // Brush begins here.
  
  int opacity = 40;
  
  // Current mouse position in the space.
  ofPoint curMouse (ofGetMouseX(), ofGetMouseY());
  
  float offset = 10.0f;
  float radius = ofMap(curMouse.x, 0, ofGetWidth(), 30, 80);
  
  ofSetColor(ofColor::red, opacity);
  ofDrawCircle(curMouse.x - offset, curMouse.y - offset, radius);
  
  ofSetColor(ofColor::green, opacity);
  ofDrawCircle(curMouse.x - offset, curMouse.y + offset, radius);
  
  ofSetColor(ofColor::yellow, opacity);
  ofDrawCircle(curMouse.x + offset, curMouse.y - offset, radius);
  
  ofSetColor(ofColor::blue, opacity);
  ofDrawCircle(curMouse.x + offset, curMouse.y + offset, radius);
  
  // Brush ends here.
  
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
