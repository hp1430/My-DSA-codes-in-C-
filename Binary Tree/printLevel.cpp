#include<bits/stdc++.h>
#include<algorithm>
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
void display(Node *root, int curr, int level)
{
    if(root==NULL) return;
    if(curr==level) cout<<root->val<<" ";
    display(root->left, curr+1, level);
    display(root->right, curr+1, level);
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
    display(a, 1, 3);
   
}