// Printing elements of an array in reverse order.

#include <iostream>
using namespace std;
void rev(int a[], int n, int i)
{
    if(i<0) return;
    cout<<a[i]<<" ";
    rev(a, n, i-1);
    
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    rev(a, n, n-1);
    return 0;
}