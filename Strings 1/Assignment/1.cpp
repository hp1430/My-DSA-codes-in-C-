#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Enter string: ";
    string s;
    getline(cin, s);
    for(int i=1; i<s.length(); i=i+2)
    s[i]='#';
    cout<<"New string is:-"<<endl<<s;
}