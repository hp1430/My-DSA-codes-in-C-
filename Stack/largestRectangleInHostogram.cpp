// Brute Force approach

// Find right smaller element and left smaller element, 
// the result will be the number of rectangles between * height of rectangle we are at

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=6;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(2);
    nums.push_back(3);

    int ans=-1;
    for(int i=0; i<nums.size(); i++)
    {
        int prev=0, next=0;
        int j=i-1;
        while(j>=0 && nums[j]>=nums[i])
        {
            j--;
            prev++;
        }
        j=i+1;
        while(j<nums.size() && nums[j]>=nums[i])
        {
            j++;
            next++;
        }
        int count=next+prev+1;
        ans=max(ans, nums[i]*count);
    }
    cout<<ans<<endl;
}