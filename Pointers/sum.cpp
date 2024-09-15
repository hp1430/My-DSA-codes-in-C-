#include <iostream>
using namespace std;
int main()
{
    int x=12,y=21;
    int *a=&x, *b=&y;
    cout<<*a + *b<<endl;
}