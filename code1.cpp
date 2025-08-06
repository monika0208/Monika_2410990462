#include<iostream>
using namespace std;

class Parent{
    private:
    string pr="private";
    public:
    string pub="public";
    protected:
    string prot="protected";
};

class child:public Parent{
    public:
    void display(){
    cout<<pub;
    // cout<<pr;    cannot access priavte class
    cout<<prot;
}

};


int main(){
    child c;
    cout<<c.pub<<endl;
    c.display();
    // cout<<c.pr;     cannot access both priavte and protected class
    // cout<<c.prot;
}