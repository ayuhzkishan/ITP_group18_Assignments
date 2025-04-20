#include<iostream>
using namespace std;
int main(){
    string s;
    cout <<"Enter a string" <<endl;
    cin >>s;
    cout <<"The string is:" <<endl;
    cout <<s;
    string n="";
    for(int i=0;s[i] !='\0';i++){
        char ch=s[i];
        if('A'<=ch && ch<='Z' || 'a'<=ch && ch<='z'){
            n+=ch;
        }
    }
    cout  <<endl <<"The filtered string is:";
    cout << n;
}