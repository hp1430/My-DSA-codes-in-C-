#include <iostream>
#include <cmath>
using namespace std;

int fact(int a)
{
    int ans=1;
    for(int i=a; i>0; i--)
    {
        ans *= i;
    }
    return ans;
}
int comb(int n, int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}
int perm(int n, int r)
{
    return (fact(n)/fact(n-r));
}

int main()
{
    int n, r;
    cout<<"Enter the values of n and r resp.: ";
    cin>>n>>r;

    cout<<"Combination is: "<<comb(n, r)<<endl;
    cout<<"Permutation is: "<<perm(n, r)<<endl;

    return 0;
}