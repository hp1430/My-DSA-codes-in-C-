#include <bits/stdc++.h>
using namespace std;
void str(string ans, string org, int i, bool flag)
{
    char ch=org[i];
    if(i==org.length())
    {
        cout<<ans<<endl;
        return;
    }
    if(i==org.length()-1)
    {
        if(flag==true) str(ans+ch, org, i+1, true);
        str(ans, org, i+1, true);
        return;
    }
    char dh=org[i+1];
    if(ch==dh)
    {
        if(flag==true) str(ans+ch, org, i+1, true);
        str(ans, org, i+1, false);
    }
    else{
        str(ans+ch, org, i+1, true);
        str(ans, org, i+1, false);
    }
}
int main()
{
    string s="122";
    str("", s, 0, true);
    return 0;
}