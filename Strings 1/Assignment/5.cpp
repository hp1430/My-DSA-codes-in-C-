#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Enter string: ";
    string s;
    getline(cin, s);
    int ans=0;
    for(int i=s.length()-1; i>=0; i--)
    ans = (ans*10)+s[i];
    cout<<"Number is: "<<ans<<endl;
}