#include <iostream>


using  namespace std;
class Rectangle{
private:
    int breadth;
    int length;
public:
    Rectangle(int length =0,int breadth=0) {
        setBreadth(breadth);
        setLength(length);
    }

    void setLength(int length) {
        length = length;
    }

    void setBreadth(int breadth) {
        breadth = breadth;
    }

    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    [[nodiscard]] int area() const{
        return length*breadth;
    }
    [[nodiscard]] int perimeter() const{
        return 2*(length+breadth);
    }
};

int main() {
  Rectangle t1;

    cout<<"The area of the rectangle is: "<<t1.getLength()<<endl
        <<"The perimeter of the rectangle is: "<<t1.getBreadth()<<endl;
    return 0;
}



