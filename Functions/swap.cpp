#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a after swapping: "<<a<<endl;
    cout<<"b after swapping: "<<b<<endl;
}