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
int level(Node *root)
{
    if(root==NULL) return 0;
    return 1+max(level(root->left), level(root->right));
}
int maxi(Node *root)
{
    if(root==NULL) return INT_MIN;
    return max(root->val, max(maxi(root->left), maxi(root->right)));
}
int size(Node *root)
{
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}
int sum(Node *root)
{
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}
void display(Node *root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
    //cout<<endl;
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
    cout<<endl;
    cout<<"Sum: "<<sum(a)<<endl;
    cout<<"Size: "<<size(a)<<endl;
    cout<<"Max: "<<maxi(a)<<endl;
    cout<<"Level: "<<level(a)<<endl;
}