// Given a sorted binary array, efficiently count the total number of 1’s in it.

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
    int ans;
    int lo=0, hi=n-1, mid;
    bool flag=false;
    cout<<"Answer is: ";
    while(lo<=hi)
    {
        mid = (lo+(hi-lo)/2);
        if(a[mid]==1)
        {
            if(a[mid-1]!=1)
            {
                cout<<n-mid;
                
                exit(0);
            }
            else if(a[mid-1]==1)
            {
                hi=mid-1;
            }
        }
        else lo=mid+1;
    }
    if(flag==false) cout<<0;

    return 0;
}