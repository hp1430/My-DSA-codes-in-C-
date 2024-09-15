#include <iostream>
using namespace std;
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
    for(int j=0; j<n; j++)
    {
        if(j&1)
        {
            for(int i=0; i<n; i++)
            cout<<a[i][j]<<" ";
        }
        else
        {
            for(int i=n-1; i>=0; i--)
            cout<<a[i][j]<<" ";
        }
    }
}