#include <iostream>
#include "Opertor Overloading/Complex.h"


using  namespace std;


int main() {
    Complex c1(5,10);
    Complex c2(2,2);
    Complex c3=c1+c2;
    c3.printComplexNum();
    cout<<c3;
    operator<<(cout,c3);
   return 0;
}





