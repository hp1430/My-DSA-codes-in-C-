#include<bits/stdc++.h>
using namespace std;
int c=0;
int inversion(vector<int>&a, vector<int>&b)
{
    int count=0, i=0, j=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]>b[j])
        {
            count+=(a.size()-i);
            j++;
        }
        else i++;
    }
    return count;
}
void merge(vector<int>&a, vector<int>&b, vector<int>&v)
{
    int n1= a.size(), n2=b.size(), i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j]) v[k++]=a[i++];
        else v[k++]=b[j++];
    }
    if(i>=n1) while(j<n2) v[k++]=b[j++];
    if(j>=n2) while(i<n1) v[k++]=a[i++];
}
void mergeSort(vector<int>&v)
{
    int n=v.size();
    if(n==1) return;
    int n1=n/2, n2=n-n/2;
    vector<int>a(n1), b(n2);
    for(int i=0; i<n1; i++) a[i]=v[i];
    for(int i=0; i<n2; i++) b[i]=v[i+n1];
    mergeSort(a);
    mergeSort(b);
    c+=inversion(a,b);
    merge(a, b, v);
    a.clear();
    b.clear();
}
int main()
{
     vector <int>v= {5,1,8,2,3};
    cout<<"Before Sorting:-"<<endl;
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    mergeSort(v);
    cout<<"After Sorting:-"<<endl;
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl<<"No. of inversions = "<<c<<endl;
    return 0;
}