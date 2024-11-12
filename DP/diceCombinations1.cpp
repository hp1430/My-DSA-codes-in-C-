#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
vector<int>dp;
int f(int n) {
    if(n==0) return 1;
    if(dp[n] != -1) return dp[n];
    int ans = 0;
    for(int i=1; i<=6; i++) {
        if(n-i < 0) break;
        ans = (ans%mod + f(n-i)%mod)%mod;
    }
    return dp[n] = ans%mod;
}
int fbu(int num) {
    vector<int>dp(num+5);
    dp[0]=1;
    for(int n=1; n<=num; n++) {
        int ans = 0;
        for(int i=1; i<=6; i++) {
            if(n-i < 0) break;
            ans = (ans%mod + dp[n-i]%mod)%mod;
        }
        dp[n] = ans%mod;
    }
    return dp[num];
}
int main() {
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+5, -1);
    cout<<fbu(n)<<endl;
    return 0;
}