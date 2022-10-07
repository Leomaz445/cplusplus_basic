//
// Created by PC on 08/10/2022.
//

#ifndef UNTITLED7_COMPLEX_H
#define UNTITLED7_COMPLEX_H

#include <iostream>
using namespace std;
class Complex {
private:
    int real;
    int img;
public:
    Complex(int real=0,int img=0);
    int getReal();
    int getImg();
    void setReal();
    void setImg();
    Complex operator+(Complex x);
    Complex operator-(Complex x);
    string printComplexNum();
};


#endif //UNTITLED7_COMPLEX_H
