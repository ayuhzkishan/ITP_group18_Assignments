#include <iostream>
using namespace std; 

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int check = 0 ;
    
    for (int i = 2; i <= num/2; i++){
        if (i*i == num){
            check = 1;
            break;
        }
        else if (i*i >= num){
            break;
        }
    }
    
    if (check == 1){
        cout << "Given number is a perfect square.";
    }
    else{
        cout << "Given number is NOT a perfect square.";
    }
    return 0;
}