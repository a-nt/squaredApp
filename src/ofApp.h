#pragma once

//--------------------------------------------------------------
//
//
// BRUTAL PROJECTS
// SQUARED 2020 / Anders Nærø Tangen
//
// Developed in OF 0.11.0 on macOS 10.15.7
//--------------------------------------------------------------

#include "ofMain.h"
#include "ofxGui.h"

#include "Square.hpp"
#include "Box.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    int pixelSize;
    
    ofImage reference;
    int colorMode;
    int drawMode;
    
    int w;
    int h;
    
    
    // SQUARE MODE
    vector<vector<Square>> squares;
    
    // BOX MODE
    vector<vector<Box>> boxes;
    ofEasyCam cam;
    ofLight light;
    
		
};
