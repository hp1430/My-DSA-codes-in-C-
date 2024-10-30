#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void sort(vector<int>&nums, int k, vector<int>&ans) {
    priority_queue<int, vector<int>, greater<int>>pq;
    for(int i=0; i<nums.size(); i++) {
        pq.push(nums[i]);
        if(pq.size()>k) {
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }
}
int main()
{
    vector<int>arr = {10, 9, 8, 7, 4, 70, 60, 50};
    int k=4;
    vector<int>ans;
    sort(arr, k, ans);
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}