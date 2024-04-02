// 27->20->18->10->9->0      number of steps=5

#include <bits/stdc++.h>
using namespace std;
vector<int>dp;
vector<int>get_digits(int n)
{
    vector<int>d;
    while(n)
    {
        if(n%10!=0) d.push_back(n%10);
        n/=10;
    }
    return d;
}
int f(int n)
{
    if(n==0) return 0;
    if(n<10) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int>d=get_digits(n);
    int ans=INT_MAX;
    for(int i=0; i<d.size(); i++) ans=min(ans, f(n-d[i]));
    return dp[n]=ans+1;
}
int fbu(int num)
{
    dp[0]=0;
    for(int i=1; i<=9; i++) dp[i]=1;
    
    for(int n=10; n<=num; n++)
    {
        vector<int>d=get_digits(n);
        int ans=INT_MAX;
        for(int i=0; i<d.size(); i++)
        {
            ans=min(ans, dp[n-d[i]]);
        }
        dp[n]=ans+1;
    }
    return dp[num];
}
int main()
{
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+5, -1);
    cout<<fbu(n);
    return 0;
}