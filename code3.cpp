#include<iostream>
using namespace std;

class Math{
    public:
    static int square(int a){
        return a*a;
    }
};

int main(){
    cout<<Math::square(4);
}