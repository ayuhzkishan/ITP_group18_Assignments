#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter the number of rows to be there in the pattern:"<<endl;cin>>n;int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n-1);j++){
            if(j%2!=0){
                cout<<num;num++;
            }else{
                cout<<"*";
            }
        }
        cout<<""<<endl;
    }
}