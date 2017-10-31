#include "ofApp.h"

ofPoint center;

// Offset between multiple lines.
//--------------------------------------------------------------
void ofApp::setup(){
  ofSetFrameRate(1);
}

//--------------------------------------------------------------
void ofApp::update(){
  center.x = ofGetWidth()/2;
  center.y = ofGetHeight()/2;
}

//--------------------------------------------------------------
void ofApp::draw(){
  int maxY = ofGetHeight();
  int maxX = ofGetWidth();
  
  // Initialize conditions.
  int x = 0;
  int y = 0;
  
//  // First half.
//  while (x <= maxX && y <= maxX) {
//    ofPoint from(0, y);
//    ofPoint to(x, 0);
//    
//    ofSetColor(ofColor::black);
//    ofDrawLine(from, to);
//    
//    // Increment the offset.
//    x += offset;
//    y += offset;
//    offset = offset * 2;
//  }
  
  // Second half
//
//  // Reset x counter
//  x = 0;
//  
  // New 'To' points
  int i = 0, j = maxY;
  
  while (x <= maxX * 2) {
    ofPoint from (x, maxY);
    ofPoint to(i, j);
    
    ofDrawLine(from, to);
    
    // Caculate new offsets.
    x += offset;
    i += offset/2;
    j -= offset/2;
  }
  
  int offset = 20;
  
  for (int x = 0; x <= maxX; ) {
    ofPoint from (x, 0);
    ofPoint to(0, x);
    
    ofDrawLine(from, to);
    
    x = x + offset;
    offset = offset * 2;
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
