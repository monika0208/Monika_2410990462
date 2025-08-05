#include<iostream>
using namespace std;

class bankaccount{
    private:
    double balance;
    public:
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double wa){
        balance-=wa;
    }

    double getbalance(){
        return balance;

    }
};

int main(){
    bankaccount b1;
    b1.deposit(1000);
    bankaccount b2;
    b2.deposit(500);
    
    b1.withdraw(200);
    b2.withdraw(200);

    cout<<b1.getbalance()<<endl<<b2.getbalance();


}

