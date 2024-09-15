#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int row, column;
    cout<<"Enter the value of rows and columns: ";
    cin>>row>>column;
    int arr[row][column];
    cout<<"Enter the elements of the array:-"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        cin>>arr[i][j];
    }
    //logic to transpose...

    for(int i=0; i<row; i++)
    {
        for(int j=i+1; j<column; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    // printing the array...
    
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }

}