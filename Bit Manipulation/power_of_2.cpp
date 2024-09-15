#include <iostream>
using namespace std;
int main(){
    int n, x;
    cout<<"Enter n: ";
    cin>>n;
    while(n){
        x=n;
        n=(n&(n-1));
    }
    cout<<x;
}