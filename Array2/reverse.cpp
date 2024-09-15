#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements if the array:-"<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x); 
    }
    int i=0, j=v.size()-1;
    while (i<j)
    {
        swap(v[i++], v[j--]);
    }
    cout<<"Array after swapping is:-"<<endl;
    for(int i=0; i<v.size(); i++)
    cout<<v.at(i)<<" ";
    
return 0;
}