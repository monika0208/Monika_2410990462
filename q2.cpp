#include<iostream>
using namespace std;
int main(){
    float c;
    float k;
    float f;
    cout<<"Enter c ";
    cin>>c;
    cout<<"Enter k ";
    cin>>k;
    cout<<"Enter f ";
    cin>>f;
    f=(c*9/5)+32;
    k=c+273.15;
    c=(f-32)*5/9;
    cout<<"c to f "<<f<<endl;
    cout<<"c to k "<<k<<endl;
    cout<<"f to c "<<c<<endl;

}