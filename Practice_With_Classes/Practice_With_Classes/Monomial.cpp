//
//  Monomial.cpp
//  Practice_With_Classes
//
//  Created by Tim  on 1/23/15.
//  Copyright (c) 2015 Tim_Hodges. All rights reserved.
//

#include "Monomial.h" // Included the header file for this class
#include <iostream> // iostream needed for print functionality
#include <stdlib.h>
#include <string>
#include "math.h"  // Math needed for evaluation

using namespace std;



Monomial::Monomial(){ // default constructor
    setcoeff(0);
    setxpower(0);
    setypower(0);
    setzpower(0);
    

}

Monomial::Monomial(int a, int b, int c){ // overloaded constructor for monomial, if no coefficient is specified.
    setcoeff(1);
    setxpower(a);
    setypower(b);
    setzpower(c);
    
    
}
Monomial::Monomial(float f, int a, int b, int c){ //Constructor for leading coeff not equal to one.
    setcoeff(f);
    setxpower(a);
    setypower(b);
    setzpower(c);
}


Monomial::Monomial(string s){ // forced input must be of the form "ax^by^cz^d"
    
    long int xloc = s.find("x"); //finds locations of x,y, and z in the string s.
    long int yloc = s.find("y");
    long int zloc = s.find("z");
    
    setcoeff(stoi(s.substr(0,xloc)));
    setxpower(stoi(s.substr(xloc + 2, yloc)));
    setypower(stoi(s.substr(yloc + 2, zloc)));
    setzpower(stoi(s.substr(zloc + 2, s.length())));

    
}
/*
 Need to make a constructor that takes in a string. For Polynomial class development.
 */

float Monomial::evaluate(Point p){ // evaluation self explanatory
    return coeff*powf(p.getx(), xpower)*powf(p.gety(), ypower)*powf(p.getz(),zpower);
    
}



void Monomial::print(){ // Print nasty but needed for ease of reading.
if(coeff == 1){
        if( xpower == 1){
            if(ypower == 1){
                if(zpower == 1){
                    cout << "xyz";
                }
                else if(zpower == 0){
                    cout << "xy";
                }
                else{
                    cout << "xy" << "z^" << zpower;
                }
            }
            else if(ypower == 0){
                if(zpower == 1){
                    cout << "xz";
                }
                else if(zpower == 0){
                    cout << "x" ;
                }
                else{
                    cout << "xz^" << zpower;
                }
            }
            else{
                if(zpower == 1){
                    cout << "xy^" << ypower << "z";
                }
                else if(zpower == 0){
                    cout << "xy^" << ypower;
                }
                else{
                    cout << "xy^" << ypower << "z^" << zpower;
                }
            }
        }
        else if(xpower == 0){
                if(ypower == 1){
                    if(zpower == 1){
                        cout << "yz";
                    }
                    else if(zpower == 0){
                        cout << "y";
                    }
                    else{
                        cout << "y" << "z^" << zpower;
                    }
                }
                else if(ypower == 0){
                    if(zpower == 1){
                        cout << "z";
                    }
                    else if(zpower == 0){
                        cout << 0;
                    }
                    else{
                        cout << "z^" << zpower;
                    }
                }
                else{
                    if(zpower == 1){
                        cout << "y^" << ypower << "z";
                    }
                    else if(zpower == 0){
                        cout << "y^" << ypower;
                    }
                    else{
                        cout << "y^" << ypower << "z^" << zpower;
                    }
                }
        }
        else{
            if(ypower == 1){
                if(zpower == 1){
                    cout << "x^" << xpower << "yz";
                }
                else if(zpower == 0){
                    cout << "x^" << xpower << "y";
                }
                else{
                    cout << "x^" << xpower << "y" << "z^" << zpower;
                }
            }
            else if(ypower == 0){
                if(zpower == 1){
                    cout << "x^" << xpower << "z";
                }
                else if(zpower == 0){
                    cout << "x^" << xpower;
                }
                else{
                    cout << "x^" << xpower << "z^" << zpower;
                }
            }
            else{
                if(zpower == 1){
                    cout << "x^" << xpower << "y^" << ypower << "z";
                }
                else if(zpower == 0){
                    cout << "x^"<< xpower << "y^" << ypower;
                }
                else{
                    cout << "x^" << xpower << "y^" << ypower << "z^" << zpower;
                }
            }
        }
    }
else if(coeff != 0){
    if( xpower == 1){
        if(ypower == 1){
            if(zpower == 1){
                cout << coeff << "xyz";
                }
                else if(zpower == 0){
                    cout << coeff << "xy";
                }
                else{
                    cout << coeff << "xy" << "z^" << zpower;
                }
                }
                else if(ypower == 0){
                    if(zpower == 1){
                        cout << coeff << "xz";
                    }
                    else if(zpower == 0){
                        cout << coeff << "x";
                    }
                    else{
                        cout << coeff << "xz^" << zpower;
                    }
                }
                else{
                    if(zpower == 1){
                        cout << coeff << "xy^" << ypower << "z";
                    }
                    else if(zpower == 0){
                        cout << coeff << "xy^" << ypower;
                    }
                    else{
                        cout << coeff << "xy^" << ypower << "z^" << zpower;
                    }
                }
                }
    else if(xpower == 0){
                    if(ypower == 1){
                        if(zpower == 1){
                            cout << coeff << "yz";
                        }
                        else if(zpower == 0){
                            cout << coeff << "y";
                        }
                        else{
                            cout << coeff << "y" << "z^" << zpower;
                        }
                    }
                    else if(ypower == 0){
                        if(zpower == 1){
                            cout << coeff << "z";
                        }
                        else if(zpower == 0){
                           
                            cout << coeff << endl;
                        }
                        else{
                            cout << coeff << "z^" << zpower;
                        }
                    }
                    else{
                        if(zpower == 1){
                            cout << coeff << "y^" << ypower << "z";
                        }
                        else if(zpower == 0){
                            cout << coeff << "y^" << ypower;
                        }
                        else{
                            cout << coeff << "y^" << ypower << "z^" << zpower;
                        }
                    }
                }
    else{
                    if(ypower == 1){
                        if(zpower == 1){
                            cout << coeff << "x^" << xpower << "yz" ;
                        }
                        else if(zpower == 0){
                            cout << coeff << "x^" << xpower << "y" ;
                        }
                        else{
                            cout << coeff << "x^" << xpower << "y" << "z^" << zpower ;
                        }
                    }
                    else if(ypower == 0){
                        if(zpower == 1){
                            cout << coeff << "x^" << xpower << "z" ;
                        }
                        else if(zpower == 0){
                            cout << coeff << "x^" << xpower ;
                        }
                        else{
                            cout << coeff << "x^" << xpower << "z^" << zpower;
                        }
                    }
                else{
                        if(zpower == 1){
                            cout << coeff << "x^" << xpower << "y^" << ypower << "z" ;
                        }
                        else if(zpower == 0){
                            cout << coeff << "x^"<< xpower << "y^" << ypower ;
                        }
                        else{
                            cout << coeff << "x^" << xpower << "y^" << ypower << "z^" << zpower;
                        }
                    }
                }
    }
else{
    cout << 0;
    
}
    //cout << endl;
}

/* In diffx, diffy,diffz, if the power to differentiate with is zero return the zero monomial.
    Otherwise do a naive power rule and return the corresponding monomial. This makes use of the constructor specifying the coeffcient and power of the variables.
 
 */


Monomial Monomial::diffx(){
    if (xpower == 0){
        Monomial M = Monomial(0,0,0,0);
        return M;
    }
    else{
        float Tempcoeff = coeff*xpower;
        xpower = xpower - 1;
        Monomial M = Monomial(Tempcoeff,xpower,ypower,zpower);
        return M;
    }
    
}

Monomial Monomial::diffy(){
    if (ypower == 0){
        Monomial M = Monomial(0,0,0,0);
        return M;
    }
    else{
        float Tempcoeff = coeff*ypower;
        ypower = ypower - 1;
        Monomial M = Monomial(Tempcoeff,xpower,ypower,zpower);
        return M;
    }
    
}

Monomial Monomial::diffz(){
    if (zpower == 0){
        Monomial M = Monomial(0,0,0,0);
        return M;
    }
    else{
        float Tempcoeff = coeff*zpower;
        zpower = zpower - 1;
        Monomial M = Monomial(Tempcoeff,xpower,ypower,zpower);
        return M;
    }
    
}


