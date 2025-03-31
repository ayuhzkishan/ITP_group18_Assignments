#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            cout << num << " is a perfect square" << endl;
        }
    }

    cout << num << " is not a perfect square." << endl;
    }
