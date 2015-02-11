//
//  Point.h
//  Practice_With_Classes
//
//  Created by Tim  on 1/23/15.
//  Copyright (c) 2015 Tim_Hodges. All rights reserved.
//

#ifndef __Practice_With_Classes__Point__
#define __Practice_With_Classes__Point__

#include <stdio.h>

class Point{
    
private:
    float x;
    float y;
    float z;

    
    
public:

    Point();
    Point(float x, float y, float z);
    
    float getx(){return x;};
    float gety(){return y;};
    float getz(){return z;};
    
    void setx(float a){x = a;};
    void sety(float a){y = a;};
    void setz(float a){z = a;};
    
    void print();
    
    
    
    
        
    
    
    
};

#endif /* defined(__Practice_With_Classes__Point__) */
