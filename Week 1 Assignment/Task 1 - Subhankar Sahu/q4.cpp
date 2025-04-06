#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    // Binary conversion
    if (num == 0) {
        cout << "Binary: 0" << endl;
    } else {
        int arr[32], i = 0, temp = num;
        while (temp > 0) {
            arr[i++] = temp % 2;
            temp /= 2;
        }
        cout << "Binary: ";
        for (int j = i - 1; j >= 0; j--)
            cout << arr[j];
        cout << endl;
    }

    // Octal conversion
    if (num == 0) {
        cout << "Octal: 0" << endl;
    } else {
        int arr[32], i = 0, temp = num;
        while (temp > 0) {
            arr[i++] = temp % 8;
            temp /= 8;
        }
        cout << "Octal: ";
        for (int j = i - 1; j >= 0; j--)
            cout << arr[j];
        cout << endl;
    }

    return 0;
}
