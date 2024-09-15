#include <bits/stdc++.h>
using namespace std;
void skip(string org, string ans, int i)
{
    if(i==org.length())
    {
        cout<<ans;
        return;
    }
    char ch=org[i];
    if(ch=='a') skip(org, ans, i+1);
    else skip(org, ans+ch, i+1);
}
int main()
{
    string s="himanshu parashar";
    skip(s, "", 0);
}