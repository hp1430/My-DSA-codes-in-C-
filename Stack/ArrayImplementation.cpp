#include <iostream>
using namespace std;
class stack{
    public:
    int arr[5];
    int idx;
    stack(){
        idx=-1;
    }
    void push(int val)
    {
        if(idx==sizeof(arr)/sizeof(arr[0]))
        {
            cout<<"Stack is Full !!"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop()
    {
        if(idx==-1)
        {
            cout<<"Stack is Empty !!!"<<endl;
            return;
        }
        idx--;
    }
    int top()
    {
        if(idx==-1)
        {
            cout<<"Stack is Empty !!!"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size()
    {
        return idx+1;
    }
};
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
  //  cout<<st.size()<<" "<<st.top()<<endl;
}