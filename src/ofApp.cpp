#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    randX1 = ofRandom(ofGetWidth());
    randY1 = ofRandom(ofGetHeight());
    
    randX2 = ofRandom(ofGetWidth());
    randY2 = ofRandom(ofGetHeight());
    
    randX3 = ofRandom(ofGetWidth());
    randY3= ofRandom(ofGetHeight());
    
    randX4 = ofRandom(ofGetWidth());
    randY4 = ofRandom(ofGetHeight());
    
    randX5 = ofRandom(ofGetWidth());
    randY5 = ofRandom(ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetPolyMode(OF_POLY_WINDING_NONZERO);
    ofBeginShape();
        ofVertex ( randX1 , randY1);
        ofVertex ( randX2 , randY2);
        ofVertex ( randX3 , randY3);
        ofVertex ( randX4 , randY4 );
        ofVertex ( randX5 , randY5 );
    ofEndShape();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'b') {
        randX1 = ofRandom(ofGetWidth());
        randY1 = ofRandom(ofGetHeight());
        
        randX2 = ofRandom(ofGetWidth());
        randY2 = ofRandom(ofGetHeight());
        
        randX3 = ofRandom(ofGetWidth());
        randY3= ofRandom(ofGetHeight());
        
        randX4 = ofRandom(ofGetWidth());
        randY4 = ofRandom(ofGetHeight());
        
        randX5 = ofRandom(ofGetWidth());
        randY5 = ofRandom(ofGetHeight());
    }
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
