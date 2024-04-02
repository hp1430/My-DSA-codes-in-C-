#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int f(vector<int>&c, vector<int>&a, int i, int x)
{
    if(i==c.size()) return 0;
    if(dp[i][x]!=-1) return dp[i][x];
    if(x==0)
    {
        return dp[i][x] = f(c, a, i+1, x+1)+a[i];
    }
    else if(x==c.size()-i)
    {
        return dp[i][x] = f(c, a, i+1, x-1)+c[i];
    }
    else
    {
        return dp[i][x] = min(f(c, a, i+1, x+1)+a[i], f(c, a, i+1, x-1)+c[i]);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>c, a;
    while(n--)
    {
        int x, y;
        cin>>x>>y;
        c.push_back(x);
        a.push_back(y);
    }
    dp.clear();
    dp.resize(10005, vector<int>(5005, -1));
    cout<<f(c, a, 1, 1)+a[0];
}