#include<iostream>
using namespace std;

class Book{
    public:
    string title;
    int pages;


};

int main(){
    Book b;   //memory in stack
    b.title="1984";
    b.pages=328;
    cout<<b.title<<endl;

    Book *ptr=new Book;   //memory in heap
    ptr->title="C++ Primer";
    ptr->pages=900;
    cout<<ptr->title<<endl;
    delete ptr;

}