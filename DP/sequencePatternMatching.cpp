#include <bits/stdc++.h>
using namespace std;

bool sequencePatternMatching(string s1, string s2) {
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(s1[i-1]==s2[j-1]) dp[i][j] = 1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    if(dp[n][m]==n) return true;
    else return false;
}

int main() {
    string s1, s2;
    cin>>s1>>s2;
    cout<<sequencePatternMatching(s1, s2);
}