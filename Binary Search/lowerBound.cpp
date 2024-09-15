#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:-"<<endl;
    for(int i=0; i<n; i++)
    cin>>a[i];
    int lo=0, hi=n-1, mid, target;
    cout<<"Enter the target: ";
    cin>>target;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(target<a[mid]) hi=mid-1;
        else lo=mid+1;
    }
    cout<<"The lower bound is: "<<a[hi]<<endl;
}