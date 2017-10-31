#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(ofColor::black);
  ofSetCircleResolution(30);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
  // Map the mouseX to angle.
  float angleDeg = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 360);
  
  float radius = 100;
  
  float x = cos(ofDegToRad(angleDeg)) * radius;
  float y = sin(ofDegToRad(angleDeg)) * radius;
  
  ofPushMatrix();
  ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
  
  ofPoint from (0, 0);
  ofPoint to (x, y);
  
  ofSetColor(ofColor::white);
  ofNoFill();
  ofDrawCircle(0, 0, radius);
  
  ofSetColor(ofColor::yellow);
  ofDrawLine(from, to);
  
  ofPopMatrix();
}
