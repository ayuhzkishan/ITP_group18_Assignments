#include<iostream>
using namespace std;
int main(){
    char s[100],r[100];
    char c;
    int i=0,j=0;
    cout <<"Enter a string";
    cin >>s;
    cout <<"The string is:";
    cout <<s;
    cout <<endl <<"Enter the character to remove:";
    cin >>c;
while(s[i]!='\0'){
    if(s[i]!=c){
        r[j]=s[i];
        j++;
    }
    i++;
}
r[j]='\0';
cout <<endl <<"The filtered string is:";
cout <<r;
}