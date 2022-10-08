//
// Created by PC on 08/10/2022.
//

#include "Complex.h"


Complex::Complex(int real, int img) {
    this->real=real;
    this->img=img;
}

int Complex::getReal() {
    return real;
}

int Complex::getImg() {
    return img;
}

void Complex::setReal() {
  this->real=real;
}

void Complex::setImg() {
    this->img=img;
}

Complex Complex::operator+(Complex x) {
    Complex temp;
    temp.real=this->real+x.real;
    temp.img=this->img+x.img;
    return temp;
}

Complex Complex::operator-(Complex x) {
    Complex temp;
    temp.real=this->real-x.real;
    temp.img=this->img-x.img;
    return temp;
}

void Complex::printComplexNum() {
     cout<<this->real<<"+"<<this->img<<"i"<<endl;
}

ostream &operator<<(ostream &out, Complex &x) {
    return out<<x.real<<"+"<<x.img<<"i"<<endl;
}

//Complex operator+(Complex x, Complex y) {
//    Complex temp;
//    temp.real=y.real-x.real;
//    temp.img=y.img-x.img;
//    return temp;
//
//}
