#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i;
   for (i = 1; i * i <= num; i++) 
   {
        if (i * i == num)
            break;
    }
    if (i * i == num)
        cout << num << " is a Perfect Square." << endl;
    else
        cout << num << " is NOT a Perfect Square." << endl;
    return 0;
}
