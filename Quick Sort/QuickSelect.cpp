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
int KthSmallest(int a[], int si, int ei, int k)
{
    int pi=partition(a, si, ei);
    if(pi+1==k) return a[pi];
    else if(pi+1 < k) return KthSmallest(a, pi+1, ei, k);
    else return KthSmallest(a, si, pi-1, k);
}
int main()
{
    int a[]={5,1,8,2,7,6,3,4};
    int n= sizeof(a)/sizeof(a[0]);
    int k=7;
    cout<<KthSmallest(a, 0, n-1, k)<<endl;
    return 0;
}