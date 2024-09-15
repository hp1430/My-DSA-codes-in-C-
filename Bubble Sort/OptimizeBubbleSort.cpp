#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the size of the array:-";
    cin>>n;
    int v[n];
    cout<<"Enter the elements of the array:-"<<endl;
    for(int i=0; i<n; i++)
    cin>>v[i];

    //Implementing the binary search

    for(int i=0; i<n-1; i++)
    {
        bool flag=true;
        for(int j=0; j<n-1-i; j++)
        {
            if(v[j]>v[j+1])
            {
                swap(v[j], v[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<"The array after sorting is as follows:-"<<endl;
    for(int i=0; i<n; i++)
    cout<<v[i]<<" ";
    
}