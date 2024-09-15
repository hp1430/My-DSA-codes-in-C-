// Generating all the unique permutations of a string using backtracking

#include <iostream>
#include <unordered_set>
using namespace std;
void permutations(string str, int i)
{
    if(i==str.size()-1)
    {
        cout<<str<<endl;
        return;
    }
    unordered_set<char>s;
    for(int idx=i; idx<str.size(); idx++)
    {
        if(s.find(str[idx])!=s.end()) continue;

        s.insert(str[i]);
        swap(str[i], str[idx]);
        permutations(str, i+1);
        swap(str[i], str[idx]);
    }
}
int main()
{
    permutations("abc", 0);
    return 0;
}