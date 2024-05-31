#include <iostream>
#include <vector>
using namespace std;
//vector<long long>dp;
// long long f(int n)
// {
//     if(n==0) return 1;
//     if(dp[n]!=-1) return dp[n];
//     long long ans=0;
//     for(int i=1; i<=6; i++)
//     {
//         if(n-i>=0) ans+=f(n-i)%1000000007;
//     }
//     return dp[n] = ans%1000000007;
// }
long long fbu(int n)
{
    vector<long long>dp(n+5, 0);
    dp[0]=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=6; j++)
        {
            if(i-j<0) break;
            dp[i]=((dp[i]%1000000007)+(dp[i-j]%1000000007))%1000000007;
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    // dp.clear();
    // dp.resize(n+5, -1);
    cout<<fbu(n);
    return 0;
}