#include <iostream>
using namespace std;
int main()
{
    int a[20], n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    for(int i=0; i<n; i++)
    cin>>a[i];
    int visit[n]={0};
    int min=-1000, count=0, min1;
    for(int i=0; i<n; i++)
    {
        min=-1000;
        for(int j=0; j<n; j++)
        {
            if(visit[j]==1) continue;
            if(a[j]<min)
            {
                min=a[j];
                min1=j;
            }
            
        }
        if(visit[min1]==0)
        {
            a[min1]=count;
            count++;
            visit[min1]=1;
        }
    }
    cout<<"New array is:-"<<endl;
    for(int i=0; i<n; i++)
    cout<<a[i];
}