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
using namespace std;

Polynomial::Polynomial(string s){
    //cout << "Here " << endl;
    //std::vector<Monomial> V; //Define a vector to hold monomials. Dynamically allocates better than array.
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
    
    

}

void Polynomial::print(){

   int i = 1;
    for (auto c : V){ // print out tokens.
       // cout << "c is " << endl;
        if (i == 1){
            c.print();
            i += i;
        }
        else{
            cout << " + ";
            c.print();
        }
        
    }
       cout << endl;
}




float Polynomial::evaluate(Point P){
    
    float total = 0;
    for (auto c : V){
        total += c.evaluate(P);
    }
        

    
    
    return total;
}