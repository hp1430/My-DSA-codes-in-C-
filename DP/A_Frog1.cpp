#include<bits/stdc++.h>
using namespace std;
vector<int>h;
int answer(int i)
{
    if(i==h.size()-1) return 0;
    int ans=INT_MAX;
    for(int j=1; j<=2; j++)
    {
        if(i+j >= h.size()) break;
        ans=min(ans, abs(h[i]-h[i+j])+answer(i+j));
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    h.resize(n);
    for(int i=0; i<n; i++) cin>>h[i];
    cout<<answer(0);
    return 0;
}