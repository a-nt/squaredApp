//
//  Box.cpp
//  squaredApp
//
//  Created by Anders Nærø Tangen on 20/10/2020.
//

#include "Box.hpp"

Box::Box() {
    
}

void Box::draw(float greyNormal, int size){
    
    int max = 8;
    
    divider = round(max * greyNormal);

    if (divider <= 0) {
        divider = 1;
    }
    
    step = size / divider;

    
    float xpos = 0.0;
    float ypos = 0.0;
    
    
    for (int y = 0; y < divider; y++){
        ofDrawLine(0, ypos, size, ypos); // vert
        ypos = ypos + step;
    }
    
    for (int x = 0; x < divider; x++) {
        ofDrawLine(xpos, 0, xpos, size); // horiz
        xpos += step;
    }
    
}
