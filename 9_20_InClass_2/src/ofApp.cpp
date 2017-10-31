#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
  
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofPushMatrix();
  
    // Angle in degrees.
    ofRotateZ(45);
    
    ofSetColor(ofColor::aliceBlue);
    ofDrawLine(0,0, 100, 0);
    
    ofPushMatrix();
    
      ofTranslate(100, 0);
      ofRotateZ(100);
      ofSetColor(ofColor::aliceBlue);
      ofDrawLine(0,0, 100, 0);
    
    ofPopMatrix();
  
  ofPopMatrix();
  
  ofSetColor(ofColor::blue);
  ofDrawRectangle(0, 0, 30, 30);
}
