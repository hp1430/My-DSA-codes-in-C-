#include <iostream>
#include <vector>
using namespace std;
void subarray(vector<int>v, int a[], int n, int i)
{
    if(i==n)
    {
        for(int j=0; j<v.size(); j++)
        cout<<v[j]<<" ";
        cout<<endl;
        return;
    }
    subarray(v, a, n, i+1);
    if(v.size()==0 || v[v.size()-1]==a[i-1])
    {
        v.push_back(a[i]);
        subarray(v, a, n, i+1);
    }
    
}
int main()
{
    int a[]={1,1,3,1,1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>v;
    subarray(v, a, n, 0);
}