#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int f(vector<int>&wt, vector<int>&val, int W, int n) {
    if(n==0 || W==0) return 0;
    if(dp[n][W] != -1) return dp[n][W];
    if(wt[n-1] > W) return dp[n][W] = f(wt, val, W, n-1);
    else return dp[n][W] = max((val[n-1]+f(wt, val, W-wt[n-1], n-1)), (f(wt, val, W, n-1)));
}
int main() {
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {1, 4, 5, 7};
    int W = 7;
    int n = wt.size();
    dp.clear();
    dp.resize(n+1, vector<int>(W+1, -1));
    cout<<f(wt, val, W, 3)<<endl;
}
