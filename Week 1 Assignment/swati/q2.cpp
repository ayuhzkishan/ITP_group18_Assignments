#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter the lengths of the three sides: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "Triangle can be formed." << endl;

        if (a == b && b == c) {
            cout << "It is an Equilateral triangle.\n";
        } else if (a == b || b == c || a == c) {
            cout << "It is an Isosceles triangle.\n";
        } else {
            cout << "It is a Scalene triangle.\n";
        }
    } else {
        cout << "Triangle cannot be formed." << endl;
    }

    return 0;
}