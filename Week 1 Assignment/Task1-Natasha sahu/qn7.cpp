#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the number of line";
    cin >> n;
    int c=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           printf("%d",c);
           if(j<=n-1){
            cout <<"*";
           }
           c++;
}
cout <<endl;
}
}