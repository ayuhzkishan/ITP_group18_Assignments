#include <iostream>
using namespace std;

int main() {
    int num, largest = 0;

    cout << "Enter a number: ";
    cin >> num;

    num = abs(num); 

    while (num) {
        largest = max(largest, num % 10);
        num /= 10;
    }

    cout << "Largest digit: " << largest << endl;

    return 0;
}