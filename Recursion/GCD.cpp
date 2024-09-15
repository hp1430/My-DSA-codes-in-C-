#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(a>b) swap(a,b);
    if(b%a == 0) return a;
    else return gcd(b%a, a);
    return 1;
}
int main()
{
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"GCD is: "<<gcd(a,b);
}