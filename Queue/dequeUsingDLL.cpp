#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
public:
    Node *head;
    Node *tail;
    int size;
    Deque()
    {
        head=tail=NULL;
        size=0;
    }

    void pushEnd(int val)
    {
        Node *temp=new Node(val);
        if(size==0) head=tail=temp;
        else
        {
            tail->next=temp;
            temp->prev=tail;
            tail=tail->next;
        }
        size++;
    }

    void pushHead(int val)
    {
        Node *temp=new Node(val);
        if(size==0) head=tail=temp;
        else
        {
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void popEnd()
    {
        if(size==0)
        {
            cout<<"Empty Dequeue !!!"<<endl;
            return;
        }
        Node *temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete(temp);
        size--;
    }

    void popHead()
    {
        if(size==0)
        {
            cout<<"Empty Dequeue !!!"<<endl;
            return;
        }
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        head->next->prev=head;
        delete(temp);
        size--;
    }
    
    void display()
    {
        if(size==0)
        {
            cout<<"Empty Dequeue !!!"<<endl;
            return;
        }
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Deque q;
    q.pushEnd(10);
    q.pushEnd(20);
    q.display();
    q.pushHead(30);
    q.display();
    q.popEnd();
    q.display();
    cout<<q.size<<endl;
    q.popHead();
    q.display();
}