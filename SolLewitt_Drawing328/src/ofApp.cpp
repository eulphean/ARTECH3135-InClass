// Author: Amay Kataria
// Date: 09/01/2017

#include "ofApp.h"

// Center of the app.
ofPoint center;

// Outer circle parameters.
int radius = 300;

//--------------------------------------------------------------
void ofApp::setup(){
  // Set background color.
  ofBackground(ofColor::black);
}

//--------------------------------------------------------------
void ofApp::update(){
  // Set the center variables.
  center.x = ofGetWidth()/2;
  center.y = ofGetHeight()/2;
}


void drawOuterCircle() {
  // Set the resolution for a smooth circle.
  ofSetCircleResolution(100);
  ofSetColor(ofColor::black);
  ofDrawCircle(center, radius);
  
  // Stroke the circle.
  ofSetColor(ofColor::ghostWhite);
  ofNoFill();
  ofDrawCircle(center, radius);
  
  // Draw the lines in the circle.
  for (float i = radius; i >= -radius; i = i - 10)
  {
    float y = sqrt(radius * radius - i * i);
    
    ofPoint pointA (i + center.x, y + center.y);
    ofPoint pointB (i + center.x, -y + center.y);
    
    ofSetColor (ofColor::ghostWhite);
    ofDrawLine(pointA, pointB);
  }
}

//--------------------------------------------------------------
void ofApp::draw() {
  // Draw center big circle
  drawOuterCircle();
  
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
