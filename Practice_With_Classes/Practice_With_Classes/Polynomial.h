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
#include <vector>//

using namespace std;
#endif /* defined(__Practice_With_Classes__Polynomial__) */

class Polynomial : Function{
    
    
public:

    std::vector<Monomial> V;
    int degree;
    Polynomial(string s); // standard constructor.
    Polynomial(std::vector<Monomial> U); //Constructor used in differentiation
    float evaluate(Point P);
    void print();
    int getdegree();
    
    Polynomial diffx();
    Polynomial diffy();
    Polynomial diffz();
    
    
};




