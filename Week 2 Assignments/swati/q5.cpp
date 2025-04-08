#include<iostream>
#include<climits>
using namespace std;

int main() {
    int m, i, maxm, smax;

    cout << "Enter the number of elements in the array: ";
    cin >> m;
    
    cout << "Enter the elements in the array: ";
    int a[m];
    
    for(i = 0; i < m; i++) {
        cin >> a[i];
    }

    maxm = INT_MIN;
    smax = INT_MIN;

    for(i = 0; i < m; i++) {
        maxm = max(maxm, a[i]);
    }

    for(i = 0; i < m; i++) {
        if(a[i] != maxm) {
            smax = max(smax, a[i]);
        }
    }

    cout << "The second maximum element in the array is " << smax << endl;

    return 0;
}
