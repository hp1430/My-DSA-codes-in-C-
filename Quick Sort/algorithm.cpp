#include<iostream>
using namespace std;
int partition(int a[], int si, int ei)
{
    int pe=a[si];
    int count=0;
    for(int i=si+1; i<=ei; i++) if(a[i]<=pe) count++;
    int pi=si+count;
    swap(a[si], a[pi]);
    int i=si, j=ei;
    while(i<pi && j>pi)
    {
        if(a[i]<=pe) i++;
        if(a[j]>pe) j--;
        else if(a[i]>pe && a[j]<pe) swap(a[i++], a[j--]);
    }
    return pi;
}
void quickSort(int a[], int si, int ei)
{
    if(si>=ei) return;
    int pi=partition(a, si, ei);
    quickSort(a, si, pi-1);
    quickSort(a, pi+1, ei);
}
int main()
{
    int a[]={5,1,8,2,7,6,3,4};
    int n= sizeof(a)/sizeof(a[0]);
    quickSort(a, 0, n-1);
    cout<<"Array after sorting:-"<<endl;
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}