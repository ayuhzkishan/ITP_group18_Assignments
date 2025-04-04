//I have assumed that the sample output was wrong and there was supposed to be another row for sample output of 4}
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int count = 1;
    for (int row = 1; row <= n; row++)
     {
        for (int col = 1; col <= n; col++) 
        {
            cout << count;
            if (col != n) 
            {
                cout << "*";  
            }
            count++;
        }
        cout << endl;
    }

    return 0;

}
