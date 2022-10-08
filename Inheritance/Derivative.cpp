//
// Created by PC on 08/10/2022.
//

#include "Derivative.h"
#include <iostream>
using namespace std;
Derivative::Derivative() {cout<<"This is the Derivative default constructor"<<endl;}
Derivative::Derivative(int y) {cout<<"This is the Derivative parametrize constructor and the value of y is:"<<y<<endl;}
Derivative::Derivative(int y,int x): Base(x) {cout<<"This is the parametrize constructor and the value of y is: "<<y<<endl;}