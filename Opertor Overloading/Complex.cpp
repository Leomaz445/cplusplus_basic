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

string Complex::printComplexNum() {
    return to_string(this->real)+"+"+to_string(this->img)+"i";
}
