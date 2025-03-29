#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter a number belonging to the decimal number system:"<<endl;cin>>n;
    int n1=n;
    int binnumber=0;int octnumber=0;
    while(n){
        binnumber=binnumber*10+(n%2);n/=2;
    }
    while(n1){
        octnumber=octnumber*10+(n1%8);n1/=8;
    }
    int bin=0;int oct=0;
    while(binnumber){
        bin=bin*10+(binnumber%10);binnumber/=10;
    }
    while(octnumber){
        oct=oct*10+(octnumber%10);octnumber/=10;
    }
    cout<<"The binary equivalent of the number is "<<bin<<endl;
    cout<<"The octal equivalent of the number is "<<oct<<endl;
    return 0;
}
