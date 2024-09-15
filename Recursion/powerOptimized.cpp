#include <iostream>
using namespace std;
int power(int x, int n)
{
    if(n==1) return x;
    int ans;
    if(n%2 == 0) ans=power(x,n/2);
}
int main()
{
    int x,n;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Answer is: "<<power(x,n);
    return 0;
}