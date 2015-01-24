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
#include "Point.h"
using namespace std;



int main(int argc, const char * argv[]) {
    
    // insert code here...
    
    std::cout << "Hello, World!\n";
    
    Point P = Point(1,1,1);
    
    Monomial M = Monomial(1,1,1);
    
    
   
    M.print();
    cout << M.degree() << endl;
    
    cout << M.evaluate(P) << endl;
    
    
    
    
    //M.print();
    
    
    
    
    return 0;
}
