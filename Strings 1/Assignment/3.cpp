// Program to check whether a string is palindrome or not.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Enter string: ";
    string s, ans;
    getline(cin, s);
    int flag=0;
    for(int i=0, j=s.length()-1; i<s.length(), j>=0; i++, j--)
    ans[i]=s[j];
    for(int i=0; i<s.length(); i++)
    {
        if(ans[i]!=s[i])
        {
            cout<<"False";
            flag=1;
            exit(0);
        }
    }
    if(flag==0) cout<<"True";
}