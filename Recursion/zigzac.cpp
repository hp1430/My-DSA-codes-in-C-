#include <iostream>
using namespace std;
void zigzac(int n)
{
    if(n==0) return;
    cout<<n;
    zigzac(n-1);
    cout<<n;
    zigzac(n-1);
    cout<<n;
}
int main()
{
    zigzac(2);
    return 0;
}