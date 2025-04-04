#include <iostream>
using namespace std;

int main() {
    int num, i = 0, j = 0;
    int binary[32], octal[32];

    cout << "Enter a decimal number: ";
    cin >> num;

    int temp = num;
    while (temp > 0) {
        binary[i++] = temp % 2;
        temp /= 2;
    }

    temp = num;
    while (temp > 0) {
        octal[j++] = temp % 8;
        temp /= 8;
    }
    cout << "Binary: ";
    for (int k = i - 1; k >= 0; k--) {
        cout << binary[k];
    }
    cout << endl;

    cout << "Octal: ";
    for (int k = j - 1; k >= 0; k--) {
        cout << octal[k];
    }
    cout << endl;

    return 0;
}