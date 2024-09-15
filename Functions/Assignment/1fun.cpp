#include <iostream>
#include <cmath>
using namespace std;
void square(int n);
int main()
{
    int n;
    cout<<"Enter the number upto which squares to be printed: ";
    cin>>n;
    square(n);
    return 0;
}
void square(int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<i<<":"<<i*i<<endl;
    }
}