#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void reversePart(int i, int j, vector<int>&v)
{
    while (i<j)
    {
        swap(v[i++], v[j--]);
    }
}
int main()
{
    vector<int> v;
    int n, k;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:-"<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x); 
    }
    cout<<"Enter the value of k: ";
    cin>>k;
    reversePart(0, n-k-1, v);
    reversePart(n-k, n-1, v);
    reversePart(0, n-1, v);
    cout<<"Array after rotation is as follows:-"<<endl;
    for(int i=0; i<n; i++)
    cout<<v[i]<<" ";
}