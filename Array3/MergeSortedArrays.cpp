#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[20], b[20], c[40], n1, n2, n3;
    cout<<"Enter the size of array1: ";
    cin>>n1;
    cout<<"Enter the elements of array 1:-"<<endl;
    for(int i=0; i<n1; i++)
    cin>>a[i];
    cout<<"Enter the size of array2: ";
    cin>>n2;
    cout<<"Enter the elements of array2:-"<<endl;
    for(int i=0; i<n2; i++)
    cin>>b[i];
    n3=n1+n2;
    int i=0, j=0, k=0;
    for(int lp=0; lp<n3; lp++)
    {
        if(i>n1)
        {
            c[k++]=b[j++];
        }
        if(j>n2)
        c[k++]=a[i++];

        if(a[i]<b[j])
        c[k++]=a[i++];

        if(a[i]>b[j])
        c[k++]=b[j++];
    }
    cout<<"The final array after merging is:-"<<endl;
    for(int lp=0; lp<n3; lp++)
    cout<<c[lp]<<" ";
    cout<<endl;
    return 0;
}