#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    w = ofGetWidth();
    h = ofGetHeight();
        
    gridX = w / NUM_X;
    gridY = h / NUM_Y;
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i = 0; i < NUM_X; ++i) {
        for (int j = 0; j < NUM_Y; ++j) {
            coordinate[i][j] =
            ofPoint(j * gridX + (gridX/2), i * gridY + (gridY/2));
        }
    }

    for (int i = 0; i < NUM_X; ++i) {
        for(int j = 0; j < NUM_Y; ++j) {
            ofFill();
            ofSetColor(
                       ofMap(sin((i*5 + ofGetFrameNum())/60.f), -1, 1, 30, 155),
                       ofMap(cos((j*3 + ofGetFrameNum())/30.f), -1, 1, 50, 80),
                       ofMap(sin((-j*4 + ofGetFrameNum())/45.f), -1, 1, 106, 175)
                       );
            ofPoint p = coordinate[i][j];
            ofDrawRectangle(p, gridX, gridY);

//
//            if (ofGetFrameNum() % 120 == 0) {
//                if (ofRandom(1.0) > 0.5) {
//                    fillOrNot[i][j] = true;
//                } else {
//                    fillOrNot[i][j] = false;
//                }
//            }
//
//            ofSetColor(255, 100);
//            if (fillOrNot[i][j]) {
//                ofDrawCircle(p.x, p.y, r);
//            };


            
        }
    }


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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
