#include<iostream>
using namespace std;

class father{
    public:
    void f(){
        cout<<"papa"<<endl;
    }
};
class Mother{
    public:
    void m(){
        cout<<"MUmmy"<<endl;
    }
};
class me:public father,public Mother{
    public:
    void M(){
        cout<<"my parents"<<endl;
    }
};

int main(){
    me a;
    a.M();
    a.m();
    a.f();
}