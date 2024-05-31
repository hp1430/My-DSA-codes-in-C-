#include <bits/stdc++.h>
using namespace std;


// int f(vector<int>&coins, int x, int i)
// {
//     if(x==0) return 0;
//     if(x<0 || i>=n) return INT_MAX;
//     if(dp[x][i] !=-1) return dp[x][i];
//     int ans = INT_MAX;
//     ans = min(ans, f(coins, x, i+1));
//     int include = f(coins, x-coins[i], i);
//     if(include !=INT_MAX) ans=min(ans, 1+include);
//     return dp[x][i] = ans;
// }




// int fbu(vector<int>&coins, int x, int n)
// {
//     vector<vector<int>>dp(x+1, vector<int>(n+1, INT_MAX));
//     for(int i=0; i<=n; i++) dp[0][i]=0;
//     for(int x1=1; x1<=x; x1++)
//     {
//         for(int i=n-1; i>=0; i--)
//         {
//             int ans = INT_MAX;
//             if(i+1<n) ans = min(ans, dp[x1][i+1]);
//             int include = INT_MAX;
//             if(x1-coins[i]>=0) include = dp[x1-coins[i]][i];
//             if(include != INT_MAX) ans = min(ans, 1+include);
//             dp[x1][i] = ans;
//         }
//     }
//     return dp[x][0];
// }


int optimized(vector<int>&coins, int x, int n)
{
    vector<int>dp(x+1, 1e9);
    dp[0]=0;
    for(int sum=1; sum<=x; sum++)
    {
        for(int coin=0; coin<n; coin++)
        {
            if(coins[coin]<=sum)
            {
                dp[sum] = min(dp[sum], 1+dp[sum-coins[coin]]);
            }
        }
    }
    return dp[x];
}
int main()
{
    int n, x;
    cin>>n>>x;
    vector<int>coins(n);
    for(int i=0; i<n; i++) cin>>coins[i];
    // dp.clear();
    // dp.resize(1000005, vector<int>(105, INT_MAX));
    //int ans = f(coins, x, 0);
    //int ans = fbu(coins, x, n);
    int ans = optimized(coins, x, n);
    if(ans<1e9) cout<<ans;
    else cout<<-1;
    return 0;
}