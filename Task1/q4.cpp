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
    cout<<"The binary equivalent of the number is "<<binnumber<<endl;
    cout<<"The octal equivalent of the number is "<<octnumber<<endl;
    return 0;
}