#include <bits/stdc++.h>
using namespace std;
int maxi(int a[], int n, int i)
{
    if(i==n) return INT_MIN;
    return max(a[i], maxi(a, n, i+1));

}
int main()
{
    int a[]={1,5,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Maximum is: "<<maxi(a, n, 0);
    return 0;
}