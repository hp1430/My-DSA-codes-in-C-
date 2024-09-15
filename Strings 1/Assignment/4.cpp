#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"Enter string: ";
    string s;
    getline(cin, s);
    int n=s.length();
    reverse(s.begin()+n, s.end());
    cout<<s;
}