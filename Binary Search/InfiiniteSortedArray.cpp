// Given an infinite sorted array, we have to search a specific element in the array.

#include <iostream>
using namespace std;
int main()
{
    int n=8;
    int a[] = {1,2,4,7,10,12,15,18};
    int target=10;
    int lo=0, hi=1;
    while(a[hi]<target)
    {
        lo=hi;
        hi *= 2;
    }
    int mid=0;
    cout<<"Index is: ";
    bool flag=false;
    while(lo<=hi);
    {
        mid = lo+(hi-lo)/2;
        if(a[mid]==target)
        {
            cout<<mid;
            flag=true;
            break;
        }
        
        else if(a[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false) cout<<-1;

    return 0;

}