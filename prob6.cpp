#include<iostream>
using namespace std;

class wallet{
    public:
    double balance;
    void setbalance(double amount){
        balance+=amount;
    }

    double getbalance(){
        return balance;
    }

};

int main(){
    wallet w;
    w.setbalance(500);
    cout<<w.getbalance();


};
