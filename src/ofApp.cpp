#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetBackgroundColor(173, 216, 230);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

   
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
           ofNoFill();
           
           ofSetLineWidth(3);
           
           ofSetRectMode(OF_RECTMODE_CENTER);
           
           for(int i = 0; i < 30; i++){
               ofRotate(ofGetElapsedTimef());
               ofScale(0.9);
               ofSetColor(250, 218, 221);
               ofDrawEllipse(0, 0, 600, 100);
               ofRotate(ofGetElapsedTimef());
               ofSetColor(177, 156, 217);
               ofDrawEllipse(0, 0, 600, 100);
               ofRotate(ofGetElapsedTimef());
               ofSetColor(251, 191, 119);
               ofDrawEllipse(0, 0, 600, 100);
               
           
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
