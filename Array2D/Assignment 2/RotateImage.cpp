// Program to rotate matrix 90 degree in anti-clockwise direction.
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n, a[20][20];
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array:-"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        cin>>a[i][j];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            swap(&a[i][j], &a[j][i]);
        }
    }
    int ptr1=0, ptr2=n-1;
    while(ptr1<ptr2)
    {
        for(int i=0; i<n; i++)
        swap(&a[ptr1][i], &a[ptr2][i]);
        ptr1++;
        ptr2--;
    }
    cout<<"Final array is as follows:-"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
