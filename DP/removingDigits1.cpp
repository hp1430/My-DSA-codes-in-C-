#include <bits/stdc++.h>
using namespace std;
vector<int>dp;
vector<int> get_digits(int n) {
    vector<int>ans;
    while(n) {
        if(n%10 != 0) ans.push_back(n%10);
        n/=10;
    }
    return ans;
}
int f(int n) {
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n] != -1) return dp[n];
    vector<int>d = get_digits(n);
    int ans = INT_MAX;
    for(int i=0; i<d.size(); i++) {
        ans = min(ans, f(n-d[i]));
    }
    return dp[n] = 1 + ans;
}
int fbu(int num) {
    vector<int>dp(num+5);
    dp[0] = 0;
    for(int i=1; i<=9; i++) dp[i] = 1;
    for(int n=10; n<=num; n++) {
        vector<int>d = get_digits(n);
        int ans = INT_MAX;
        for(int i=0; i<d.size(); i++) {
            ans = min(ans, dp[n-d[i]]);
        }
        dp[n] = 1+ans;
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