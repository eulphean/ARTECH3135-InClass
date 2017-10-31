#include "ofApp.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
  
  // Uses of modulo operator.
  
  // If it's a multiple of a number
  for (int i = 0; i < 10; i ++) {
    if ((i % 2) == 0) {
      cout << i << " is even." << endl;
    } else {
      cout << i << " is odd." << endl;
    }
  }
  
  // To keep the output in range.
  for (int i = 0; i < 100; i ++) {
    cout << i << " -> " << (i % 15) << endl;
  }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
