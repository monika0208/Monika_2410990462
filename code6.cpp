//count uppercase,lowercase,digits and special charactrers in a string and analyse weak,strong and medium string
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter password: ";
    cin>>str;
    int n=str.length();
    cout<<"length: "<<n<<endl;
    int uc=0,lc=0,no=0,sc=0;
    for(int i=0;i<n;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            uc++;
        }
        else if(str[i]>='a'&& str[i]<='z'){
            lc++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            no++;
        }
        else{
            sc++;
        }
    }

    cout<<"Password analysis"<<endl;
    cout<<"Uppercase char: "<<uc<<endl;
    cout<<"Lowercase char: "<<lc<<endl;
    cout<<"Digits: "<<no<<endl;
    cout<<"Special characters: "<<sc<<endl;


    int categories = 0;
    if (uc > 0) categories++;
    if (lc > 0) categories++;
    if (no > 0) categories++;
    if (sc > 0) categories++;

    cout<<categories<<endl;


   // Determine password strength
    if (n < 6 || categories <= 2) {
        cout << "Password Strength: Weak" << endl;
    } else {
        if (n >= 6 && n <= 8 && categories >= 3) {
            cout << "Password Strength: Medium" << endl;
        } else if (n >= 9 && categories == 4) {
            cout << "Password Strength: Strong" << endl;
        } else {
            cout << "Password Strength: Weak" << endl;
        }
    }


    

}