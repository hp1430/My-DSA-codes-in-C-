// given n, in one operation you can do n-1, if n is divisible by 2 then n/2, if n is divisible by 3 then n/3
// return the minimum steps to convert n to 1.

#include <bits/stdc++.h>
# define inf INT_MAX
using namespace std;
//vector<int>dp;
int f(int n) {
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    // if(dp[n] != -1) return dp[n];
    // return dp[n] = 1+min({f(n-1), n%2==0? f(n/2):inf, n%3==0? f(n/3):inf});
    return 1+min({f(n-1), n%2==0? f(n/2):inf, n%3==0? f(n/3):inf});
}
int fbu(int n) {
    vector<int>dp(n+5);
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i=4; i<=n; i++) {
        dp[i] = 1+min({dp[i-1], i%2==0? dp[i/2]:inf, i%3==0? dp[i/3]:inf});
    }
    return dp[n];
}
int main() {
    int n;
    cin>>n;
    // dp.clear();
    // dp.resize(n+5, -1);
    cout<<f(n)<<endl;
    cout<<fbu(n)<<endl;
    return 0;
}