#include <iostream>
#include <queue>
using namespace std;
class Node{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node *root)
{
    queue<Node*>q;
    q.push(root);
    while(q.size()>0)
    {
        Node *temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) q.push(temp->right);
        if(temp->left!=NULL) q.push(temp->left);
    }
}
int main()
{
    Node *a=new Node(5);
    Node *b=new Node(4);
    Node *c=new Node(3);
    Node *d=new Node(6);
    Node *e=new Node(2);
    Node *g=new Node(1);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=g;
    display(a);
}