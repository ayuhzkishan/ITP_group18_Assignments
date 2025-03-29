#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter a number:"<<endl;cin>>n;
    int count=0;
    for(int i=0;i<=n;i++){
        if(i*i==n){
            cout<<"The number is a perfect square."<<endl;break;
        }
        count++;
    }
    if(count==(n+1)){
        cout<<"The number is not a perfect square."<<endl;
    }
    return 0;
}