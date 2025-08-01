#include<iostream>
using namespace std;

struct Book{
    int pages;
    double price;


};

int main(){
    Book A;
    A.pages=80;
    A.price=120.42;

    cout<<A.pages<<endl;
    cout<<A.price;

}