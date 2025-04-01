#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter a number";
    cin >> n;
    int n1=n;
    if(n==0 || n==1)
    cout <<"perfect square number";
    else if(n>0){
    for(int i=1;i<=n1/2;i++)
        if(i*i==n){
        cout <<"perfect  square number\n";
        break;
}
        else if(i*i>n){
            cout <<"not perfect square number\n ";
         break;}
 }
 else {
    cout <<"invalid input";}
}