//
//  Polynomial.cpp
//  Practice_With_Classes
//
//  Created by Tim  on 1/23/15.
//  Copyright (c) 2015 Tim_Hodges. All rights reserved.
//

#include "Polynomial.h"
#include "Monomial.h"
#include <string>
#include <iostream>
#include <vector>//
using namespace std;
/*
 Polynomial constructor given as a string of monomials.
 */

Polynomial::Polynomial(string s){
    
    std::string delimiter = "+"; // Delimeter is a + for polynomials
    
    size_t pos = 0;
    Monomial token;
    while ((pos = s.find(delimiter)) != -1) { // while we are finding +'s
        token = Monomial(s.substr(0, pos)); // Parse and make a monomial.
        //token.print();
         V.push_back(token); //add to the end
      //  cout << "s is " << s << endl;
        s.erase(0, pos + delimiter.length()); // erase token.
     //   cout << "s is now " << s << endl;
    }
    token = Monomial(s.substr(0,s.length())); // add last token
    V.push_back(token);
    
//        for (auto c : V){ // print out tokens.
//            //cout << "c is " << endl;
//            c.print();
//            
//        }
    //This sets the degree by running through all the monomials.
    degree = 0;
    for (auto c : V){ //auto will automatically determine the type of variable c is, in this case, Monomial
        if (c.degree() > degree){
            degree = c.degree();
        }
        else{
            
        }
    }

}

Polynomial::Polynomial(std::vector<Monomial> U){//Constructor given a vector of monomials, used for diffx diffy, diffz.
    V = U;
    
}

void Polynomial::print(){
    Point P = Point(1,1,1);
   int i = 1;
    for (auto c : V){ // print out tokens.
        if (i == 1){
            if (c.evaluate(P) != 0){
                c.print();
                i += i;
            }
        }
        else if (c.evaluate(P) == 0){ // Way of determining if the monomial is the zero monomial.
            
        }
        else{
            cout << " + ";
            c.print();
        }
        
    }
       cout << endl;
}

int Polynomial::getdegree(){
    return degree;
}




float Polynomial::evaluate(Point P){
    
    float total = 0; // run through each monomial adding them as we go along.
    for (auto c : V){
        total += c.evaluate(P);
    }
    
    return total;
}



Polynomial Polynomial::diffx(){
    std::vector<Monomial> TempVec;
    
    for (auto c : V){
        TempVec.push_back(c.diffx());
        
    }
    
    return TempVec;
}


Polynomial Polynomial::diffy(){
    std::vector<Monomial> TempVec;
    
    for (auto c : V){
        TempVec.push_back(c.diffy());
        
    }
    
    return TempVec;
}


Polynomial Polynomial::diffz(){
    std::vector<Monomial> TempVec;
    
    for (auto c : V){
        TempVec.push_back(c.diffz());
        
    }
    
    return TempVec;
}