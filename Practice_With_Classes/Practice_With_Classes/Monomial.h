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
#include <string>
/*
 The monomial class inherits from the function class. Forcing it to have a print method and evaluation method. 
 
Monomial is allowed to be in three variables x,y,z and have a leading coefficient. Limits are that powers of variables must be integers and the leading coefficient is allowed to be float.
 */
class Monomial : Function{
    float coeff;
    int xpower;
    int ypower;
    int zpower;
    
    
public:
    Monomial();
    Monomial(int x, int y, int z);
    Monomial(float coeff, int x, int y, int z);
    Monomial(std::string s);
    
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
    
    Monomial diffx();
    Monomial diffy();
    Monomial diffz();
    
    
    
    
    
    
    
};


#endif /* defined(__Practice_With_Classes__Monomial__) */
