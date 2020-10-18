#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    //reference.load("circle20.gif");
    //reference.load("x20.png");
    reference.load("ang20.png");
    
    w = reference.getWidth();
    h = reference.getHeight();
    
    for(int y = 0; y < h; y++) {
        vector<Square> squareRow;
        squares.push_back(squareRow);
        for(int x = 0; x < w; x++) {
            Square s;
            squares[y].push_back(s);
        }
    }
    
    pixelSize = 128;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate((ofGetWidth() - 2560) / 2, (ofGetHeight() - 2560) / 2);
    
    ofBackground(200);
    ofSetColor(0,0,255);
    ofSetLineWidth(2);
        
    
    for(int y = 0; y < h; y++) {
        for(int x = 0; x < w; x++) {
            
            Square &s = squares[y][x];
            
            ofColor pixel = reference.getColor(x,y);
            float brightness = 1 - (pixel.getBrightness() / 255);
            
            ofPushMatrix();
                ofTranslate(pixelSize * x, pixelSize * y);
                s.draw(brightness, pixelSize);
            ofPopMatrix();
        }
    }
    
    ofDrawLine(2559, 0, 2559, 2559);
    ofDrawLine(0, 2559, 2559, 2559);
    

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
