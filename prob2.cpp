#include<iostream>
using namespace std;

class Circle{
    public:
    double radius;
};

int main(){
    Circle *c1=new Circle;    //now this object is created in the heap memory
    c1->radius=2.4;
    cout<<c1->radius;
    delete c1;

}