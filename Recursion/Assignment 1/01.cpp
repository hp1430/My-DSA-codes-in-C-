// Sum of odd numbers using recursion;
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    if(a%2==0) a += 1;
    if(b%2==0) b += 1;
    int ans=b;
    if(b==a) return a;
    return ans+sum(a, b-2);
}
int main()
{
    int a,b;
    cout<<"Enter the values of a and b resp.: ";
    cin>>a>>b;
    
    cout<<"Sum is: "<<sum(a,b);
}