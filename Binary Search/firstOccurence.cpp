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
    cout<<"Found index at: ";
    bool flag=false;
    while(lo<=hi)
    {
        mid=(lo+(hi-lo)/2);
        if(target<a[mid]) hi=mid-1;
        else if(target>a[mid]) lo=mid+1;
        else
        {
            if(a[mid-1]!=target)
            {
                cout<<mid;
                flag=true;
                break;
            }
            else if(a[mid-1]==target)
            {
                hi=mid-1;
            }
        }
    }
    if(flag==false) cout<<"Not Found !!!";

    return 0;
}