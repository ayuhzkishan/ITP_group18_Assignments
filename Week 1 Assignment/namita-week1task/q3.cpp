#include <iostream>
using namespace std;
int main() {
    int num,m=0; // 'm' stores the largest digit
    cout << "Enter a number:";
    cin >> num;
    while (num > 0) {
        int d = num % 10; // Extract last digit
        if (d > m) {
            m = d;
        }
        num /= 10;
    }

    cout << "Largest digit is:" <<  m << endl;

}
