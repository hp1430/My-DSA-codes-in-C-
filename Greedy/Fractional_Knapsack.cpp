// Time: O(n logn)
// Space: Sort
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int>&p1, pair<int, int>&p2)
{
    double r1=(p1.first*1.0)/(p1.second*1.0);
    double r2=(p2.first*1.0)/(p2.second*1.0);
    return r1>r2;
}
double knapsack(vector<int>&profit, vector<int>&weights, int n, int w)
{
    vector< pair<int, int> >arr;
    // first->profit         second->weight
    for(int i=0; i<n; i++) arr.push_back({profit[i], weights[i]});
    sort(arr.begin(), arr.end(), cmp);
    double ans=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i].second<=w)
        {
            ans+=arr[i].first;
            w-=arr[i].second;
        }
        else
        {
            ans+=((arr[i].first*1.0)/(arr[i].second*1.0))*w;
            w=0;
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int>profit={60,100,120};
    vector<int>weights={10, 20, 30};
    int n=3;
    int w=50;
    cout<<"Maximum Profit is: "<<knapsack(profit, weights, n, w)<<endl;
    return 0;
}