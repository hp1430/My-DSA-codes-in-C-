#include<iostream>
using namespace std;
class node{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class stack{
public:
    node *head;
    int size;
    stack()
    {
        head=NULL;
        size=0;
    }

    void push(int num)
    {
        node *temp=new node(num);
        temp->next=head;
        head=temp;
        size++;
    }
    
    void pop()
    {
        if(!head)
        {
            cout<<"Empty Stack !!!"<<endl;
        }
        else
        {head++;
        size--;}
    }

    void display()
    {
        node *temp=head;
        while(temp)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.display();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.display();
    st.pop();
    st.display();
    cout<<st.size<<endl;
}