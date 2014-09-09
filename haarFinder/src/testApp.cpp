#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    cam.initGrabber(640, 480);
	finder.setup("haarcascade_frontalface_default.xml");
	finder.findHaarObjects(img);
}

//--------------------------------------------------------------
void testApp::update(){
    
    cam.update();
    img.setFromPixels(cam.getPixels(), 640, 480, OF_IMAGE_COLOR);
    finder.findHaarObjects( img );
    
}

//--------------------------------------------------------------
void testApp::draw(){
	
    img.draw(0, 0);
    
    ofNoFill();
    
	for(int i = 0; i < finder.blobs.size(); i++) {
		ofRectangle cur = finder.blobs[i].boundingRect;
		ofRect(cur.x, cur.y, cur.width, cur.height);
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
