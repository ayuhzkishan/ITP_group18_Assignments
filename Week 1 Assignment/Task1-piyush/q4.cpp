#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter a number belonging to the decimal number system:"<<endl;cin>>n;
    int revn1=0;int revn2=0;
    while(n){
        revn1=revn1*10+(n%10);revn2=revn2*10+(n%10);n/=10;
    }
    int binnumber=0;int octnumber=0;
    while(revn1){
        binnumber=binnumber*10+(revn1%2);revn1/=2;
    }
    while(revn2){
        octnumber=octnumber*10+(revn2%8);revn2/=8;
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
