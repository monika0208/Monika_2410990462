#include<iostream>
using namespace std;

class shape{
public:

   void s(){
   cout<<"shapes"<<endl;}
};

class circle:public shape{
public:
void c(){
    cout<<"it contains radius"<<endl;}
};

class rectangle:public shape{
public:
void r(){
   cout<<"it contains side"<<endl;}
};

int main(){
    circle a;
    a.s();
    a.c();
    rectangle b;
    b.s();
    b.r();

}

