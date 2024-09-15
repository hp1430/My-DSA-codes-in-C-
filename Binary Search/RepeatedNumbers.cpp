#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:-"<<endl;
    for(int i=0; i<n; i++)
    cin>>a[i];
    int lo=0, hi=n-1, mid;
    bool flag=false;
    cout<<"Answer is: ";
    while(lo<=hi)
    {
        mid = (lo+(hi-lo)/2);
        if(a[mid]!=mid+1)
        {
            if(a[mid]==a[mid-1])
            {
                cout<<a[mid];
                flag=true;
                break;
            }
            else
            {
                hi=mid;
            }
        }
        else lo=mid;
    }
    if(flag==false) cout<<-1;

    return 0;
}