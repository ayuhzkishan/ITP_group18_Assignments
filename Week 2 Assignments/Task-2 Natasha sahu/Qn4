#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout <<"Enter the size of the 1st array"<<endl;
    cin >> n;
    int a[n];
    cout <<"Enter the elements of the 1st array" <<endl;
    for(i=0;i<n;i++)
    cin >>a[i];
    cout <<"The elements of the 1st array" <<endl;
    for(i=0;i<n;i++)
    cout <<a[i] <<" ";
    int maxcount=0,num;
    for(i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            } }
        if(count > maxcount){
            maxcount =count;
            num=a[i];
        }
        }
    cout <<endl<< num <<"is the maximum occuring number";
}