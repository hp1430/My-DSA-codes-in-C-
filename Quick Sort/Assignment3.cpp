// Given an array where all its elements are sorted in increasing order except two swapped
// elements, sort it in linear time. Assume there are no duplicates in the array.

#include <iostream>
using namespace std;
int main()
{
    int a[]={3, 8, 6, 7, 5, 9, 10};
    int i=0, j=0;
    int n= sizeof(a)/sizeof(a[0]);
    for(int k=1; k<n; k++)
    {
        if(a[k]<a[k-1])
        {
            i=k-1;
            break;
        }
    }
    for(int k=n-1; k>0; k--)
    {
        if(a[k]<a[k-1])
        {
            j=k;
            break;
        }
    }
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    cout<<"Array after sorting:-"<<endl;
    for(int k=0; k<n; k++) cout<<a[k]<<" ";
    cout<<endl;
    return 0;
}