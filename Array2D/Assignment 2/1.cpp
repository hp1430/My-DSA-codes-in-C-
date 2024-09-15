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
    cout<<"The diagonal matrix is as follows:-"<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i+j)&1)
            cout<<" ";
            else
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;
    }
}