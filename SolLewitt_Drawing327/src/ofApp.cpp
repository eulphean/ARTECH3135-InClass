// Author: Amay Kataria
// Date: 09/01/2017

#include "ofApp.h"

// Center of the app.
float centerX, centerY;

// Shape dimensions.
int squareLength = 300;
int squarePixelOffset = 5;

// 0, 1 [top left, top right]
// 2, 3 [bottom left, bottom right]
vector<ofPoint> trapeziumVertice;
float horizontalBottomOffset = 350;
float horizontalTopOffset = 175;
float verticalOffset = 350;

// Trapezium offsets.
int verticalLineOffset = 5;

//--------------------------------------------------------------
void ofApp::setup(){
  // Set background color.
  ofBackground(ofColor::black);
  ofSetLineWidth(1.5);
}

//--------------------------------------------------------------
void ofApp::update(){
  // Set the center variables.
  centerX = ofGetWidth()/2;
  centerY = ofGetHeight()/2;
}

void drawCenterSquare() {
  float squareOriginX = centerX - squareLength/2;
  float squareOriginY = centerY - squareLength/2;
  
  // Draw the center square.
  ofSetColor(ofColor::black);
  ofDrawRectangle(squareOriginX, squareOriginY, squareLength, squareLength);
  
  // Lines inside the square.
  for (int i = squareOriginY; i < (squareOriginY + squareLength); i = i + squarePixelOffset) {
    ofSetColor(ofColor::ghostWhite);
    ofDrawLine(squareOriginX + 1, i, squareOriginX + squareLength - 1, i);
  }
  
  // Stroke - Redraw the rectangle with stroke.
  ofSetColor(ofColor::white);
  ofNoFill();
  ofDrawRectangle(squareOriginX, squareOriginY, squareLength, squareLength);
}

void drawTrapezium() {
  // Bottom vertices.
  ofPoint bottomLeft(centerX - horizontalBottomOffset, centerY + verticalOffset);
  ofPoint bottomRight(centerX + horizontalBottomOffset, centerY + verticalOffset);
  
  // [0], [1]
  trapeziumVertice.push_back(bottomLeft);
  trapeziumVertice.push_back(bottomRight);
  
  // Top Vertices.
  ofPoint topLeft(centerX - horizontalTopOffset, centerY - verticalOffset);
  ofPoint topRight(centerX + horizontalTopOffset, centerY - verticalOffset);
  
  // [2], [3]
  trapeziumVertice.push_back(topLeft);
  trapeziumVertice.push_back(topRight);
  
  // Start drawing the trapezium.
  
  ofSetColor(ofColor::ghostWhite);
  ofFill();
  // Horizontal bottom.
  ofDrawLine(trapeziumVertice[0], trapeziumVertice[1]);
  
  // Horizontal top.
  ofDrawLine(trapeziumVertice[2], trapeziumVertice[3]);
  
  // Bottom left to top left.
  ofDrawLine(trapeziumVertice[0], trapeziumVertice[2]);
  
  // Bottom right to top right.
  ofDrawLine(trapeziumVertice[3], trapeziumVertice[1]);
}

void drawTrapeziumLines() {
  // x = bottom left to top left, y = bottom left to top left
  
  ofSetColor(ofColor::ghostWhite);
  
  ofPoint bottomLeft = trapeziumVertice[0];
  ofPoint topLeft = trapeziumVertice[2];
  
  ofPoint bottomRight = trapeziumVertice[1];
  ofPoint topRight = trapeziumVertice[3];
  
  // Section 1 (left)
  float slopeLeft = (topLeft.y - bottomLeft.y) / (topLeft.x - bottomLeft.x);
  for (int k = bottomLeft.x; k < topLeft.x; k = k + verticalLineOffset) {
    // Calculate new y from incrementing x.
    float newY = bottomLeft.y + slopeLeft * (k - bottomLeft.x);
    ofDrawLine(k, bottomLeft.y, k, newY);
  }
  
  // Section 2 (middle)
  for (int i = topLeft.x; i < topRight.x; i = i + verticalLineOffset) {
    ofDrawLine(i, bottomLeft.y, i, topLeft.y);
  }

  
  // Section 3 (right)
  float slopeRight = (topRight.y - bottomRight.y) / (topRight.x - bottomRight.x);
  for (int k = bottomRight.x; k >= topRight.x; k = k - verticalLineOffset) {
    /// Calculate new y from decrementing x.
    float newY = bottomRight.y + slopeRight * (k - bottomRight.x);
    ofDrawLine(k, bottomRight.y, k, newY);
  }
  
}

//--------------------------------------------------------------
void ofApp::draw(){
  // Draw the trapezium.
  drawTrapezium();
  
  // Draw lines inside the trapezium.
  drawTrapeziumLines();
  
  // Draw the center square.
  drawCenterSquare();
  
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
