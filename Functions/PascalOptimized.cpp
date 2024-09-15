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
    int num, i, j, curr;
    cout<<"Enter the value of num: ";
    cin>>num;
    for(i=0; i<=num; i++)
    {
        curr=1;
        for(j=0; j<=i; j++)
        {
            cout<<curr<<"\t";
            curr = curr*(i-j)/(j+1);
          //  cout<<curr<<"\t";
        }
        cout<<endl;
    }
}