#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the size of the array:" <<endl;
    cin >> n;
    cout <<"Enter the elements of the array:" <<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout <<"The array is:" <<endl;
    for(int i=0;i<n;i++){
        cout <<arr[i] <<" ";
    }
    int newarr[n];
    int newsize=0;
    for(int i=0;i<n;i++){
        bool dupli=false;
        for(int j=0;j<newsize;j++){
            if(arr[i]==newarr[j]){
                dupli=true;
                break;
            }
        }

        if(!dupli){
            newarr[newsize]=arr[i];
            newsize++;
        }
    }
    cout <<endl <<"The new array is:";
    for(int i=0;i<newsize;i++){
        cout <<newarr[i] <<" ";
    }
}