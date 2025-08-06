#include<iostream>
using namespace std;

class car{
    public:
    static int totalcar;
    car(){
        totalcar++;
    }
};

int car::totalcar=0;
int main(){
    car a,b,c,d;
    cout<<car::totalcar;
}