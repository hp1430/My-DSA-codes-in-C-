// Given n as input. Generate all strings that are palindromes with the number of digits as ‘n’.
// For example a palindrome of size 3 can be 313, 121, 030.
// Note it can even contain leading zeros

#include <bits/stdc++.h>
using namespace std;
vector<string>ans;

void display()
{
    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
}

void f(int n, string subs, int i)
{
    // Base case
    if(i==n)
    {
        ans.push_back(subs);
        return;
    }
    for(int c=0; c<=9; c++)
    {
        if(i<(n/2)+1 || c==subs[n-i-1]-'0') // pick
        {
            subs[i]=c+'0';
            f(n, subs, i+1);
        }
        subs[i]='.';
    }
}
int main()
{
    int n=3;
    string subs="";
    for(int i=0; i<n; i++) subs+='.';
    f(n, subs, 0);
    display();
    return 0;
}