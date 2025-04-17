#include<iostream>
using namespace std;
int main(){
    string s;
    cout <<"Enter a string" <<endl;
    cin >>s;
    cout <<"The string is:" <<endl;
    cout <<s;
for(int i=0;s[i]!='\0';i++){
    if(s[i] >='A' && s[i]<='Z')
    s[i]=s[i]+32;
}
cout <<endl <<"The string is:";
    cout <<s;
}