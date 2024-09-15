#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    int arr[7]={10,4,2,20,40,12,30};
    int n=7;
    vector<int>ans(n);
    stack<int>st;
    st.push(arr[0]);
    ans[0]=-1;
    for(int i=1; i<n; i++)
    {
        while(st.size()>0 && st.top()<=arr[i]) st.pop();
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
    }
    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}