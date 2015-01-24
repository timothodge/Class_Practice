//
//  Polynomial.h
//  Practice_With_Classes
//
//  Created by Tim  on 1/23/15.
//  Copyright (c) 2015 Tim_Hodges. All rights reserved.
//

#ifndef __Practice_With_Classes__Polynomial__
#define __Practice_With_Classes__Polynomial__

#include <stdio.h>
#include <string>
#include "Monomial.h"
#include "Point.h"
using namespace std;
#endif /* defined(__Practice_With_Classes__Polynomial__) */

class Polynomial : Function{
    
    
public:
    int degree;
    Polynomial();
    Polynomial(string s);
    float Evaluate(Point P);
    void Print();
    int getdegree();
    
    
};




