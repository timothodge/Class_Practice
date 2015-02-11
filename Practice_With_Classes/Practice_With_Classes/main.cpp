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
    
   
    Polynomial Poly = Polynomial("1x^2y^0z^0 + 1x^0y^2z^0 + 1x^0y^0z^2 + 1x^1y^1z^1");
    
    
    Poly.print();
    cout << "Poly evaluated at ";
    P.print();
    cout << " is " << Poly.evaluate(P) << endl;
    
    cout << "Degree of Poly is " << Poly.getdegree() << endl;
    
    Polynomial Pdx = Poly.diffx();
    
    Pdx.print();
    
    cout << "Pdx evaluated at ";
    P.print();
    cout << " is " << Pdx.evaluate(P)  << endl;
    
    Polynomial Pdxdz = Pdx.diffz();
    
    Pdxdz.print();
    
    cout << "Pdxdz evaluated at ";
    P.print();
    cout << " is " << Pdxdz.evaluate(P) << endl;
    
    
    
    return 0;
}
