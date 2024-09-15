#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[j]==1) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
        v[i]=0;
        v[j]=1;
        i++;
        j--;
        }
        
    }
    for(int k=0; k<v.size(); k++)
    cout<<v[k]<<" ";
    cout<<endl;
}