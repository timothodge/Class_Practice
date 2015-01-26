//
//  Function.h
//  Practice_With_Classes
//
//  Created by Tim  on 1/23/15.
//  Copyright (c) 2015 Tim_Hodges. All rights reserved.
//

#ifndef __Practice_With_Classes__Function__
#define __Practice_With_Classes__Function__

#include <stdio.h>
#include "Point.h"
/*
 This class is for a generic function. Eventually it is hoped that a Polynomial, Trig function and other classes will inherit from this one.
 
 */
class Function{
    
    virtual float evaluate(Point Pt) =0; //Purely virtual function, making this class abstract so it cannot
                                         // be instantiated.
    virtual void print() = 0;
    
};

#endif /* defined(__Practice_With_Classes__Function__) */
