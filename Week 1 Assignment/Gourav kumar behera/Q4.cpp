#include<iostream>
using namespace std;
int main()
{
    int n,b=0,o=0,p=1;
    cout << "enter a decimal number:";
    cin >> n;
    int n1=n;
    int n2=n;
    while(n1!=0)
    {
        b=b+(n1%2*p);
        o=o+(n2%8*p);
        p=p*10;
        n1=n1/2;
        n2=n2/8;
    }
    cout <<"decimal number "<< n<<" in binary is "<<b<<endl;
    cout <<"decimal number "<< n<<" in octal is "<<o;
}