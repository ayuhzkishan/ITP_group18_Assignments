#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5}, n = 5, k = 2;
    k = k % n;
    for(int i = n - k; i < n; i++) cout << a[i] << " ";
    for(int i = 0; i < n - k; i++) cout << a[i] << " ";
}