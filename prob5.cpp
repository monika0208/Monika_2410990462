#include<iostream>
using namespace std;

class Bankaccount{
    private:
    int accountno=444;
    public:
    string name="Monika";
};

int main(){
    Bankaccount B1;
    cout<<B1.name<<endl;
    // cout<<B1.accountno;  //this cannot be accesed here as it is private in class
}