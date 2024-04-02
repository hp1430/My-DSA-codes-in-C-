// There are n friends, they can either go single or in pair in a party, return total number of such ways
#include<bits/stdc++.h>
using namespace std;
int ways(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    return ways(n-1)+((n-1)*ways(n-2));
}
int main()
{
    int n;
    cin>>n;
    int ans=ways(n);
    cout<<ans;
    return 0;
}