#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int> &q)
{
    int n=q.size();
    for(int i=1; i<=n; i++)
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    stack<int>st;
    int n=q.size();
    for(int i=0; i<n; i++)
    {
        st.push(q.front());
        q.pop();
    }
    for(int i=0; i<n; i++)
    {
        q.push(st.top());
        st.pop();
    }
    display(q);
}