//
//  Monomial.h
//  Practice_With_Classes
//
//  Created by Tim  on 1/23/15.
//  Copyright (c) 2015 Tim_Hodges. All rights reserved.
//

#ifndef __Practice_With_Classes__Monomial__
#define __Practice_With_Classes__Monomial__

#include <stdio.h>
#include "Point.h"
#include "Function.h"
class Monomial : Function{

    
public:
    float coeff;
    int xpower;
    int ypower;
    int zpower;
    
    Monomial();
    Monomial(int x, int y, int z);
    Monomial(float coeff, int x, int y, int z);
    
    float getcoeff(){return coeff;};
    int getxpower(){return xpower;};
    int getypower(){return ypower;};
    int getzpower(){return zpower;};
    
    void setcoeff(float f){coeff = f;};
    void setxpower(int a){xpower = a;};
    void setypower(int b){ypower = b;};
    void setzpower(int c){zpower = c;};
    
    void print();
    float degree(){return xpower + ypower + zpower;};
    float evaluate(Point P);
    
    
    
    
    
    
};


#endif /* defined(__Practice_With_Classes__Monomial__) */
