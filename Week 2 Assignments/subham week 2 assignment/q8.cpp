#include <iostream>
using namespace std;

int recursion(int n) {
    if (n == 0)
        return 0; 
    return n%10 + recursion(n/10);
}
int main()
 {
    int n;
    cout << "Enter the number:";
    cin >> n;
    int result = recursion(n);
    cout << "Sum of the digits is " <<  result << endl;
    return 0;
}