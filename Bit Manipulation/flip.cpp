#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int n=x;
    x=x|(x>>1);
    x=x|(x>>2);
    x=x|(x>>4);
    x=x|(x>>8);
    x=x|(x>>16);
    n=n^x;
    cout<<"Answer is: "<<n;
}