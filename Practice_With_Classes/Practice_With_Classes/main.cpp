//
//  main.cpp
//  Practice_With_Classes
//
//  Created by Tim  on 1/23/15.
//  Copyright (c) 2015 Tim_Hodges. All rights reserved.
//

/*
 This project is to play with classes. 
 
 Objectives: Abstract function class that will have be inherited by polynomial class.
 Polynomial with have monomial class as its base. Also, a point class will be useful.
 
 
 
 
 
 */

#include <iostream>
#include "Monomial.h"
#include "Polynomial.h"
#include "Point.h"
using namespace std;



int main(int argc, const char * argv[]) {
    
    // insert code here...
    
    std::cout << "Hello, World!\n";
    
    Point P = Point(1,1,1);
    
    //Monomial M = Monomial(1,1,1);
    
    
   
    //M.print();
   // cout << M.degree() << endl;
    
    //cout << M.evaluate(P) << endl;
    
    Monomial MP = Monomial("5x^2y^2z^2");
    
    MP.print();
    
    //cout << MP.coeff << endl;
    //cout << MP.xpower << endl;
   // cout << MP.ypower << endl;
   // cout << MP.zpower << endl;
    
   // cout << MP.evaluate(P) << endl;
    
    //M.print();
    Polynomial Poly = Polynomial("1x^2y^0z^0 + 1x^0y^2z^0 + 1x^0y^0z^2 + 1x^1y^1z^1");
    cout << "hey" << endl;
    
    Poly.print();
    cout << "Poly.eval is " << Poly.evaluate(P) << endl;
    
    
    
    return 0;
}
