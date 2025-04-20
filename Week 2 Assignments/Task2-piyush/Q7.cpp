#include <iostream>
using namespace std;
int fibonacci(int num){
    if(num==1){
        return 0;
    }else if(num==2){
        return 1;
    }else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
}
int main(){
    int n;cout<<"Enter the Nth fibonacci number you want:"<<endl;cin>>n;
    int number=fibonacci(n);
    cout<<"The Nth fibonacci number is: "<<number<<endl;
    return 0;
}