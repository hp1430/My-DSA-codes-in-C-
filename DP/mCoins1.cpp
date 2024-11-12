#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, l, m;
    cin>>k>>l>>m;
    vector<bool>dp(1000005, 0);
    dp[1] = dp[k] = dp[l] = 1;
    for(int i=2; i<=1000000; i++) {
        if(i==l || i==k) continue;
        dp[i] = !(dp[i-1] && ((i-k > 0)? dp[i-k]:1) && ((i-l > 0)? dp[i-l]:1));
    }
    string ans = "";
    for(int i=0; i<m; i++) {
        int n;
        cin>>n;
        if(dp[n]) ans+="A";
        else ans+="B";
    }
    cout<<ans<<endl;
    return 0;
}