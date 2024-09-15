#include <iostream>
using namespace std;
int main()
{
    int arr[5]={5,3,1,4,2};
    int n=5;
    for(int i=0; i<n-1; i++)
    {
        int min=-1;
        for(int j=i; j<n; j++)
        {
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[i], arr[min]);
    }
    cout<<"The array after swapping is as follows:-"<<endl;
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}