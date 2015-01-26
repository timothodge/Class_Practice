//
//  Point.cpp
//  Practice_With_Classes
//
//  Created by Tim  on 1/23/15.
//  Copyright (c) 2015 Tim_Hodges. All rights reserved.
//

#include "Point.h"
/*
 The Point class is a point currently in 3-dimensional real space. Setx is already been defined in the header file. There are two constructors one is default other is overloaded.
 */
Point::Point(){ //default constructor for the origin.
    setx(0);
    sety(0);
    setz(0);
    
    
}

Point::Point(float a, float b, float c){ // Overloaded constructor to give in point in R^3.
    setx(a);
    sety(b);
    setz(c);
    
}
