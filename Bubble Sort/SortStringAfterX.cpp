#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    string str="himanshuparashar";
    string s;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]<'r')
        s.push_back(str[i]);
    }
    for(int i=0; i<s.length()-1; i++)
    {
        bool flag=true;
        for(int j=0; j<s.length()-1-i; j++)
        {
            if(s[j]>s[j+1])
            {   swap(s[j], s[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<"The array after sorting is as follows:-"<<endl;
    cout<<s;
    
}