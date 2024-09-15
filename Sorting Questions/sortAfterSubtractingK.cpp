#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    vector<int>a;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the values of the array:-"<<endl;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    vector<int>ans;
    ans.push_back((a[0]+a[1])/2);
    ans.push_back((a[n-1]+a[n-2])/2);
    if(ans[0]<=ans[1])
    cout<<ans[0]<<" "<<ans[1]<<endl;
    else cout<<-1;
}