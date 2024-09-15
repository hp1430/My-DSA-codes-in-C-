#include <bits/stdc++.h>
using namespace std;
void subs(int a[], int i, vector<int>ans, int k, int n)
{
    if(i==n)
    {
        if(ans.size()==k)
        {
            for(int j=0; j<ans.size(); j++)
            cout<<ans[j]<<" ";
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-i) < k) return;
    subs(a, i+1, ans, k, n);
    ans.push_back(a[i]);
    subs(a, i+1, ans, k, n);
}
int main()
{
    int a[]={1,2,3,4,5};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    subs(a, 0, v, k, n);
}