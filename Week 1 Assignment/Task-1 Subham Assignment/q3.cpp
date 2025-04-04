#include<iostream>
using namespace std;
int main(){
    int n,a=0;
    int rem;
    cout <<"Enter a number" <<endl;
    cin >> n;
    if(n==0){
        cout <<"The largest digit is 0";
    }
   while(n>0){
        rem=n%10;
        if(rem>=a){
            a=rem;
        }
        n/=10;
   }
    cout << a;
}