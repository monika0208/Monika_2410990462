#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter a number: ";
    cin>>no;
    if(no%2==0){
        cout<<"Even: Yes"<<endl;
    }
    else{
        cout<<"Even: No"<<endl;
    }
    if(no>0){
        cout<<"Positive: YES"<<endl;
    }
    else{
        cout<<"positive: No"<<endl;
    }
    if(no%3==0){
        cout<<"Divisible by 3: Yes"<<endl;
    }
    else{
        cout<<"Divisible by 3: No"<<endl;
    }
    if(no%5==0){
        cout<<"Divisible by 5: Yes"<<endl;
    }
    else{
        cout<<"Divisible by 5: No"<<endl;
    }
    if(no>=0 && no<=9){
        cout<<"Single digit : Yes";
    }
    else{
        cout<<"Single digit: No";
    }
}