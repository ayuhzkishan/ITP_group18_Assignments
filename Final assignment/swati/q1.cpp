#include <iostream>
using namespace std;

int main() {
    int a[] = {1, -2, 3, -4, 5}, n = 5;
    for(int i = 0; i < n; i++)
        if(a[i] < 0) cout << a[i] << " ";
    for(int i = 0; i < n; i++)
        if(a[i] >= 0) cout << a[i] << " ";
}