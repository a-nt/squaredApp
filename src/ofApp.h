#pragma once

//--------------------------------------------------------------
//
//
// BRUTAL PROJECTS
// SQUARED 2020 / Anders Nærø Tangen
//
//
//--------------------------------------------------------------

#include "ofMain.h"
#include "ofxGui.h"

#include "Square.hpp"

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
    
    vector<vector<Square>> squares;
    
    Square oneSquare;
    Square secondSquare;
    
    int pixelSize;
    
    ofImage reference;
    int colorMode;
    
    int w;
    int h;
    
		
};
