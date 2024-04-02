#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m;
    cin>>k>>l>>m;
    vector<bool>dp(1000005, -1);
    dp[1]=dp[k]=dp[l]=1;
    for(int i=2; i<=1000000; i++)
    {
        if(i==k || i==l) continue;
        dp[i]=!(dp[i-1]&&((i-k>0)?dp[i-k]:1)&&((i-l>0)?dp[i-l]:1));
    }
    for(int i=0; i<m; i++)
    {
        int n;
        cin>>n;
        if(dp[n]==1) cout<<"A";
        else cout<<"B";
    }
    return 0;
}