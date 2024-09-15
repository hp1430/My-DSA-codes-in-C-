#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head=tail=NULL;
        size=0;
    }

    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtBeginning(int val)
    {
        Node *temp = new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void insertAtIndex(int val, int idx)
    {   
        if(idx>size || size<0)
        {
            cout<<"Invalid Index !!!"<<endl;
            return;
        }
        if(idx==0)
        {
            insertAtBeginning(val);
            return;
        }
        if(idx==size)
        {
            insertAtEnd(val);
            return;
        }
        Node *temp = new Node(val);
        Node *flag=head;
        for(int i=0; i<idx-1; i++) flag=flag->next;
        temp->next=flag->next;
        flag->next=temp;
        size++;
    }

    void getAtIndex(int idx)
    {
        if(idx<0 || idx>=size)
        {
            cout<<"Invalid Index !!!"<<endl;
            return;
        }
        if(idx==0)
        {
            cout<<head->val<<endl;
            return;
        }
        if(idx==size-1)
        {
            cout<<tail->val<<endl;
            return;
        }
        Node *temp=head;
        for(int i=0; i<idx; i++) temp=temp->next;
        cout<<temp->val<<endl;
    }

    void deleteAtBeginning()
    {
        if(size==0)
        {
            cout<<"Linked List is Underflow !!!"<<endl;
            return;
        }
        if(size==1)
        {
            head=tail=NULL;
            return;
        }
        Node *temp=head;
        head=head->next;
        size--;
        free(temp);
    }

    void deleteAtEnd()
    {
        Node *temp=head;
        Node *flag=tail;
        while(temp->next->next!=NULL) temp=temp->next;
        tail=temp;
        temp->next=NULL;
        size--;
        free(flag);
    }

    void deleteAtIndex(int idx)
    {
        if(idx<0 || idx>=size)
        {
            cout<<"Invalid Index !!!"<<endl;
            return;
        }
        if(idx==0)
        {
            deleteAtBeginning();
            return;
        }
        if(idx==size-1)
        {
            deleteAtEnd();
            return;
        }
        Node *temp=head;
        Node *flag;
        for(int i=0; i<idx-1; i++) temp=temp->next;
        flag=temp->next;
        temp->next=temp->next->next;
        flag->next-NULL;
        size--;
        free(flag);
    }

    void display()
    {
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
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtBeginning(40);
    ll.display();
    ll.insertAtIndex(50, 2);
    ll.display();
    ll.getAtIndex(0);
    ll.getAtIndex(1);
    ll.getAtIndex(2);
    ll.getAtIndex(3);
    ll.getAtIndex(4);
    ll.getAtIndex(5);
    ll.deleteAtBeginning();
    ll.display();
    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtIndex(1);
    ll.display();

    cout<<ll.size<<endl;
}