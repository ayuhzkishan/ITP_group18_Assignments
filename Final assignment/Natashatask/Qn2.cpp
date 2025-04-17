#include<iostream>
using namespace std;
int main(){
    string s;
    cout <<"Enter a string" <<endl;
    cin >>s;
    cout <<"The string is:" <<endl;
    cout <<s;
    int alphabet=0,digit=0,spchr=0;
    for(int i=0;s[i] != '\0';i++){
        char ch=s[i];
        if('A'<=ch && ch<='Z' || 'a'<=ch && ch<='z'){
           alphabet++;
        }
         else if ('0'<=ch && ch<='9'){
           digit++;
        }
        else{
            spchr++;
        }
    }
    cout <<"Alphabets:" <<alphabet <<endl;
cout<<"Digit:" <<digit <<endl;
cout <<"Special characters:" <<spchr <<endl;
    }