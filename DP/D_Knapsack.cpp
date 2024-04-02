#include <bits/stdc++.h>
using namespace std;
vector<vector<long long>>dp;
long long f(int wts[], int values[], int w, int n, int i, int ws)
{
    if(i>=n) return 0;
    if(dp[i][ws]!=-1) return dp[i][ws];
    long long ans=INT_MIN;
    ans=max(ans, f(wts, values, w, n, i+1, ws));
    if(ws+wts[i]<=w) ans=max(ans, values[i]+f(wts, values, w, n, i+1, ws+wts[i]));
    return dp[i][ws] = ans;
}

int main()
{
    int w, n;
    cin>>n>>w;
    int wts[n], values[n];
    dp.clear();
    dp.resize(105, vector<long long>(100005,-1));
    for(int i=0; i<n; i++) cin>>wts[i]>>values[i];
    cout<<f(wts, values, w, n, 0, 0);
    return 0;
}