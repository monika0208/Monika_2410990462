#include<iostream>
using namespace std;

int main(){
    int id;
    cout<<"Enter Employee ID: ";
    cin>>id;
    string name;
    cout<<"Enter employee name: ";
    cin>>name;
    double salary;
    cout<<"Enter basic salary: ";
    cin>>salary;
    int years;
    cout<<"Enter years of experience: ";
    cin>>years;

    if(years<2){
        salary+=0.05*salary;
    }
    else if(years>=2 && years<=5){
        salary+=0.10*salary;
    }
    else if(years>5){
        salary+=0.15*salary;
    }
    cout<<"Id "<<id<<endl;
    cout<<"Name "<<name<<endl;
    cout<<"salary "<<salary<<endl;
    cout<<"experience "<<years<<endl;

    

}