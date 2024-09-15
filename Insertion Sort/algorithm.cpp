#include <iostream>
using namespace std;
int main()
{
    int arr[5]={5,3,1,4,2};
    int n=5;
    for(int i=0; i<n-1; i++)
    {
        int j=i+1;
        while(j>=1 && arr[j]<arr[j-1])
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j], arr[j-1]);
                j--;
            }
            
        }
    }
    cout<<"The array after swapping is as follows:-"<<endl;
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}