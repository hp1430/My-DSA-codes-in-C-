#include <iostream>
#include <cmath>
using namespace std;
void print(int a, int b)
{
    for(int i=a; i<b; i++)
    {
        if(i&1)
        cout<<i<<"\t";
    }
}
int main()
{
    int a,b;
    cout<<"Enter the values of a and b: ";
    cin>>a>>b;
    print(a, b);
    return 0;
}