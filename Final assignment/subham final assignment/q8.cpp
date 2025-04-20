#include<iostream>
using namespace std;
int main(){
    char s[100];
    int l=0,i;
    bool palindrome=true;
    cout <<"Enter a string";
    cin >>s;
    cout <<"The string is:";
    cout <<s;
while(s[l]!='\0'){
    l++;
}
for(i=0;i<l/2;i++){
    if(s[i]!=s[l-i-1]){
        palindrome=false;
        break;
    }
}
if(palindrome){
    cout <<endl <<"The entered string is a palindrome";
}
else{
    cout <<endl <<"The entered string is  not a palindrome";
}
}