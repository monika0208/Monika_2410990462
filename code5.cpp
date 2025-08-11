#include<iostream>
using namespace std;

class Grandparent{
    public:
    void legacy(){
        cout<<"Grandparent's legacy"<<endl;
    }
};

class Parent:public Grandparent{
    public:
    void guidance(){
        cout<<"Parent's guidance"<<endl;
    }
};

class Child:public Parent{
    public:
    void play(){
        cout<<"Child playing"<<endl;
    }
};

int main(){
    Child c;
    c.play();
    c.guidance();
    c.legacy();
}