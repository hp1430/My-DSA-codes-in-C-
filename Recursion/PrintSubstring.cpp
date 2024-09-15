#include <bits/stdc++.h>
using namespace std;
void substring(string org, string ans, int i)
{
    if(i==org.length())
    {
        cout<<ans<<endl;
        return;
    }
    char ch=org[i];
    substring(org, ans+ch, i+1);
    substring(org, ans, i+1);
}
int main()
{
    string s="abc";
    substring(s, "", 0);
    return 0;
}