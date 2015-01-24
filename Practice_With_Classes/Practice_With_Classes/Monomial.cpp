//
//  Monomial.cpp
//  Practice_With_Classes
//
//  Created by Tim  on 1/23/15.
//  Copyright (c) 2015 Tim_Hodges. All rights reserved.
//

#include "Monomial.h" // Included the header file for this class
#include <iostream> // iostream needed for print functionality
#include "math.h"  // Math needed for evaluation

using namespace std;



Monomial::Monomial(){ // default constructor
    setcoeff(0);
    setxpower(0);
    setypower(0);
    setzpower(0);
    

}

Monomial::Monomial(int a, int b, int c){ // overloaded constructor for monomial.
    setcoeff(1);
    setxpower(a);
    setypower(b);
    setzpower(c);
    
    
}
Monomial::Monomial(float f, int a, int b, int c){
    setcoeff(f);
    setxpower(a);
    setypower(b);
    setzpower(c);
}

/*
 Need to make a constructor that takes in a string. For Polynomial class development.
 */

float Monomial::evaluate(Point p){ // evaluation self explanatory
    return powf(p.getx(), xpower)*powf(p.gety(), ypower)*powf(p.getz(),zpower);
    
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
                            cout << 0 << endl;
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
}
    
