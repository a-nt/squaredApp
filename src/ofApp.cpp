#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    //
    // REFERENCE IMAGES
    //
    
    //reference.load("circle20.png");
    //reference.load("x20.png");
    reference.load("ang20.png");
    //reference.load("trump40.png");
    
    colorMode = 3;
    drawMode = 2;
    

    w = reference.getWidth();
    h = reference.getHeight();
    
    pixelSize = 2560 / w; //calculate size of pixels based on canvas size
    
    if (drawMode == 1)
    {
        for(int y = 0; y < h; y++) {
            vector<Square> squareRow;
            squares.push_back(squareRow);
            for(int x = 0; x < w; x++) {
                Square s;
                squares[y].push_back(s);
            }
        }
    }

    
    if (drawMode == 2)
    {
        ofSetSmoothLighting(true);
        light.setDiffuseColor( ofFloatColor(.85, .85, .85) );
        light.setSpecularColor( ofFloatColor(1.f, 1.f, 1.f));
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (drawMode == 2)
    {
        light.setPosition((ofGetWidth()*.5)+ cos(ofGetElapsedTimef()*.5)*(ofGetWidth()*.3), ofGetHeight()/2, 500);
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofTranslate((ofGetWidth() - 2560) / 2, (ofGetHeight() - 2560) / 2);
    
    if (colorMode == 1) {
        ofBackground(100,0,0);
        ofSetColor(0,0,0,100);
        ofSetLineWidth(4);
    }
    if (colorMode == 2) {
        ofBackground(200,200,200);
        ofSetColor(0,0,100,255);
        ofSetLineWidth(3);
    }
    if (colorMode == 3){
        ofBackground(30);
        ofSetColor(200);
    }
    

    if (drawMode == 1)
    {
    
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
    
    if (drawMode == 2)
    {
        cam.begin();
        
            ofEnableDepthTest();
            ofEnableLighting();
            light.enable();
        
            ofDrawBox(0, 0, 0, 200, 200, 200);
        
        cam.end();
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
    
    //ofSaveFrame();

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
