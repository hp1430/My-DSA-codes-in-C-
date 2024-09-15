#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<endl<<endl;
    cout<<"***** MILK BILL *****"<<endl<<endl;
    cout<<"NAME: ";
    float finamt=0, finquan=0;
    string name;
    int date=01;
    getline(cin, name);
    for(int i=1; i<=62; i++)
    {
        cout<<"DATE: "<<date<<"/05/2024"<<endl;
        if(i%2==0) date++;
        float quantity, rate, amt;
        cout<<"QUANTITY: ";
        cin>>quantity;
        finquan+=quantity;
        cout<<"RATE: ";
        cin>>rate;
        amt = quantity*rate;
        cout<<"AMOUNT: "<<amt<<endl;
        finamt+=amt;
        cout<<"Total amount till now: "<<finamt<<endl<<endl;
    }
    cout<<endl;
    cout<<"TOTAL AMOUNT: "<<finamt<<endl;
    cout<<"TOTAL QUANTITY: "<<finquan<<endl;
    return 0;
}