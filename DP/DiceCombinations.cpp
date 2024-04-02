#define mod 1000000007
#include<bits/stdc++.h>
using namespace std;
vector<long long>dp(1000005, 0);
// long long f(int n)
// {
//     if(n==0) return 1;
//  //   if(n==1) return 1;
//     if(dp[n]!=-1) return dp[n];
//     long long sum=0;
//     for(int i=1; i<=6; i++)
//     {
//         if((n-i)<0) break;
//         sum=(sum%mod + f(n-i)%mod)%mod;
//     }
//     return dp[n]=sum%mod;
// }
long long fbu(int num)
{
    dp[0]=1;
    long long sum=0;
    for(int n=0; n<=num; n++)
    {
        for(int i=1; i<=6; i++)
        {
            if((n-i)<0) break;
            dp[n]=(dp[n]%mod + dp[n-i]%mod)%mod;
        }
    }
    return dp[num];
}
int main()
{
    int n;
    cin>>n;
    cout<<fbu(n);
}