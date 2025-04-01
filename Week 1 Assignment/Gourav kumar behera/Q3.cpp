#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    int n1=n;
    int max=n1%10;
    n1=n1/10;
    while(n1>0)
    {
        int r=n1%10;
        if(r>max)
        max=r;
        n1=n1/10;
    }
    cout << "the largest digit in the number "<<n<<" is "<<max;
}