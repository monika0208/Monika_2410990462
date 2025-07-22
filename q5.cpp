#include<iostream>
#include<cmath>
using namespace std;


int power(int base,int exp){
    float a=pow(base,exp);
    return a;

}

int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;

}

int prime(int n){
    int prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
        }
    }
    if(prime){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int base,exp;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"enter exponent: ";
    cin>>exp;
    int n;
    cout<<"enter a number to calculate fact and prime: ";
    cin>>n;
    cout<<"power "<<power(base,exp)<<endl;
    cout<<"fact " <<fact(n)<<endl;
    cout<<"prime " <<prime(n)<<endl;
}