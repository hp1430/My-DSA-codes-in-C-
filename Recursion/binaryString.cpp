#include <iostream>
#include <string>
using namespace std;
void str(string s, int n)
{
    if(n==0)
    {
        cout<<s<<endl;
        return;
    }
    str(s+'0', n-1);
    if(s=="" || s[s.length()-1]=='0') str(s+'1', n-1);
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    string s="";
    str(s, n);
}