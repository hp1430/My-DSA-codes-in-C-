#include<bits/stdc++.h>
using namespace std;
int rooms(vector< pair<int,int> >&a)
{
    vector<int>f;
    vector<int>s;
    for(int i=0; i<a.size(); i++)
    {
        f.push_back(a[i].first);
        s.push_back(a[i].second);
    }
    sort(f.begin(), f.end());
    sort(s.begin(), s.end());
    int i=0, j=0;
    int ans=0, room=0;
    while(i<f.size() && j<s.size())
    {
        if(f[i]<s[j])
        {
            room++;
            i++;
        }
        else{
            room--;
            j++;
        }
        ans=max(ans, room);
    }
    return ans;
}
int main()
{
    pair<int,int>p;
    vector< pair<int, int> >a={{0,30},{5,10},{15,20}};
    int ans=rooms(a);
    cout<<ans<<endl;
}