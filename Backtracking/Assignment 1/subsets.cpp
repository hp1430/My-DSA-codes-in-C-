// Given an integer array nums that may contain duplicates, return all possible
// subsets(the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// Sample Input: nums=[1,1,2]
// Sample Output: [],[1],[1,2],[1,1],[1,1,2],[2]
// Sample Input: nums=[1,2]
// Sample Output: [],[1],[2],[1,2]

#include <bits/stdc++.h>
using namespace std;
vector<int>nums={1, 2, 2, 3};
vector<vector<int>>ans;

void f(int i, vector<int>&subs)
{
    ans.push_back(subs);
    for(int j=i; j<nums.size(); j++)
    {
        if(j==i || nums[j]!=nums[j-1])
        {
            subs.push_back(nums[j]);
            f(j+1, subs);
            subs.pop_back();
        }
    }
}
int main()
{
    ans.clear();
    vector<int>subs;
    f(0, subs);
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}