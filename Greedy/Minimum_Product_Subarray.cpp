#include<bits/stdc++.h>
using namespace std;
int product(vector<int>&a)
{
    int neg=0, zero=0, pos=0, pos_prod=1, neg_prod=1, largest_neg=INT_MIN;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==0) zero++;
        if(a[i]>0)
        {
            pos++;
            pos_prod*=a[i];
        }
        if(a[i]<0)
        {
            neg++;
            neg_prod*=a[i];
            largest_neg=max(largest_neg, a[i]);
        }
    }
    if(neg==0)
    {
        if(zero>0) return 0;
        else
        {
            auto it=min_element(a.begin(), a.end());
            return *it;
        }
    }
    else
    {
        if(neg&1)
        {
            return neg_prod*pos_prod;
        }
        else
        {
            return (neg_prod/largest_neg)*pos_prod;
        }
    }
}
int main()
{
    vector<int>arr={-2, -3, 1, 4, -2, -5};
    cout<<"Minimum product of Subset is: "<<product(arr);
    return 0;
}