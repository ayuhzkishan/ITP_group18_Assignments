#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter a decimal number";
    cin >> n;
    int binary[32],i=0,num=n;
    while(num>0){
        binary[i++]=num%2;
        num/=2;
    }
    int octal[32],j=0;
    num=n;
    while(num>0){
        octal[j++]=num%8;
        num/=8;
    }
    cout <<"Binary";
    for(int k=i-1;k>=0;k--){
        cout <<binary[k];
    }
cout <<endl;
cout <<"Octal";
    for(int k=j-1;k>=0;k--){
        cout <<octal[k];
    }
    cout <<endl;

}