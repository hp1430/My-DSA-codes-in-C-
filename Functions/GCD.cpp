#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    int hcf=1;
    for(int i=min(a,b); i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        return i;
    }
    return hcf;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD is: "<<gcd(a, b)<<endl;
    return 0;
}