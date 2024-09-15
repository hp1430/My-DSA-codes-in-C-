// Sort all -ve values at beginning and all +ve values at end.
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
     v.push_back(-60);
      v.push_back(-45);
       v.push_back(35);
        v.push_back(-43);
         v.push_back(33);
    
    int i=0, j=v.size()-1;
    while(i<j){
        if(v[i]*(-1)>0) i++;
        if(v[j]*(-1)<0) j--;
        if(i>j) break;
        if(v[i]>v[j])
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    cout<<"Vector after sorting is as follows:-"<<endl;
    for(int k=0; k<v.size(); k++)
    cout<<v[k]<<" ";
    cout<<endl;
}