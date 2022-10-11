#include <iostream>

using  namespace std;
#include "Polymorphism/ExampleTwo/Shape.h"
#include "Polymorphism/ExampleTwo/Rectangle.h"

int main() {

    int a=10,b=0,c;
    try{
        if(b==0)
            throw "cant dived by zero";
        else
            cout<<b/a<<endl;
    }catch (string a){
        cout<<"Error code number: "<<a<<endl;
    }
    //    Rectangle *d1= new Rectangle();
//    Shape *d2 = new Rectangle();
//    d1->perimeter();
//    d2->area();
//    Complex c1(5,10);
//    Complex c2(2,2);
//    Complex c3=c1+c2;
//    c3.printComplexNum();
//    cout<<c3;
//    operator<<(cout,c3);
   return 0;
}





