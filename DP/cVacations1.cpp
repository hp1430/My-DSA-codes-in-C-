#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>>dp(n, vector<int>(3));
    int a, b, c;
    cin>>a>>b>>c;
    dp[0][0]=a;
    dp[0][1]=b;
    dp[0][2]=c;
    for(int i=1; i<n; i++) {
        cin>>a>>b>>c;
        dp[i][0] = a+max(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = b+max(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = c+max(dp[i-1][0], dp[i-1][1]);
    }
    int ans = INT_MIN;
    for(int i=0; i<3; i++) ans = max(ans, dp[n-1][i]);
    cout<<ans<<endl;
    return 0;
}