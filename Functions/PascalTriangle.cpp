#include <iostream>
#include <cmath>
using namespace std;

int fact(int a)
{
    int ans=1;
    for(int i=a; i>0; i--)
    ans *= i;
    return ans;
}

int comb(int n, int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}
int main()
{
    int num, i, j;
    cout<<"Enter the number of rows of columns of Pascal's Triangle to be printed: ";
    cin>>num;

    for(i=0; i<=num; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<comb(i, j)<<"\t";
        }
        cout<<endl;
    }
}