#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    parrot.loadImage("parrot.jpg");
    parrotPixel.setFromPixels(parrot.getPixels(), 1024, 768, OF_IMAGE_COLOR);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    parrot.draw(0, 0);
    
    ofRect(ofGetMouseX(), ofGetMouseY(), 80, 80);
    
    ofColor color = parrotPixel.getColor(ofGetMouseX(), ofGetMouseY());
    ofSetColor(color);
    ofRect(ofGetMouseX()+2, ofGetMouseY()+2, 76, 76);

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
