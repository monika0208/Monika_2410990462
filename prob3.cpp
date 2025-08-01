#include<iostream>
using namespace std;
struct Date{
    int day;
    int month;
    int year;
};
int main(){
    Date d1;   //memory in stack
    d1.day=15;
    d1.month=8;
    d1.year=1947;
    cout<<d1.day<<"-"<<d1.month<<"-"<<d1.year<<endl;

    Date *d2=new Date;   //memory in heap
    d2->day=26;
    d2->month=1;
    d2->year=1950;

    cout<<d2->day<<"-"<<d2->month<<"-"<<d2->year<<endl;
    delete d2;


}