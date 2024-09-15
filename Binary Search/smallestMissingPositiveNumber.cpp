#include <iostream>
using namespace std;
int main()
{
    int a[]={0,1,3,4,5,6,9,12};
    int ans=-1;
    int lo=0, hi=(sizeof(a)/sizeof(a[0]))-1, mid;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        if(a[mid]==mid) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}