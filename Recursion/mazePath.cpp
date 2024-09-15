#include <iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec)
{
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    return maze(sr+1, sc, er, ec) + maze(sr, sc+1, er, ec);
}
int main()
{
    cout<<"No. of ways are: "<<maze(1,1,3,4)<<endl;
}