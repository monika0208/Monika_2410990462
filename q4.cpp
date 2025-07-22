#include <iostream>
using namespace std;

void depositeMoney(int account,int tbb){
    int adm=500,bdm=500,count=0;
    adm+=account;
    bdm+=tbb;
    count+=1;
    cout<<"Account balance: "<<adm<<endl<<"Total bank Balance: "<<bdm<<endl<<"total Transaction: "<<count;

}


int main(){
    int account=1000;
    int tbb=50000;
    cout<<"Initial Account balance: "<<account;
    cout<<endl<<"Initial Bank Balance: "<<tbb;
    cout<<endl<<"After deposite of 500: "<<endl;
    depositeMoney(account,tbb);
}


