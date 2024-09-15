// Q2 Check if the product of some subset of an array is equal to the target value. Where n is
// the size of the input array.

// Note: Each index value can be used only once.

// Input: n = 5 , target = 16
// Array = [2 3 2 5 4]
// Here the target will be equal to 2x2x4 = 16
// Output: YES

#include <bits/stdc++.h>
using namespace std;
bool ans=false;
void f(vector<int>&nums, int n, int t, int i)
{
    if(t==0) 
    {
        ans=true;
        return;
    }
    if(i>=n) return;
    if(t%nums[i]==0) return f(nums, n, t/nums[i], i+1);
    return f(nums, n, t, i+1);
}
int main()
{
    int n=5, target=16;
    vector<int>arr={2,3,2,5,4};
    if(ans==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}