#include <iostream>
#include <queue>
#include <climits>
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
Node* construct(int a[], int n)
{
    queue<Node*>q;
    Node *root=new Node(a[0]);
    q.push(root);
    int i=1, j=2;
    while(q.size()>0 && i<n)
    {
        Node *temp=q.front();
        q.pop();
        Node *l, *r;
        if(a[i]!=INT_MIN) l=new Node(a[i]);
        else l=NULL;
        if(j!=n && a[j]!=INT_MIN) r=new Node(a[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
void leftBoundary(Node *root)
{
    if(!root) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(!root->left) leftBoundary(root->right);
}
void leafNode(Node *root)
{
    if(!root) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    leafNode(root->left);
    leafNode(root->right);
}
void rightBoundary(Node *root)
{
    if(!root) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->right);
    if(!root->right) rightBoundary(root->left);
    cout<<root->val<<" ";
}
void display(Node *root)
{
    queue<Node*>q;
    q.push(root);
    while(q.size()>0)
    {
        int n=q.size();
        for(int i=0; i<n; i++)
        {
            Node *temp=q.front();
            q.pop();
            cout<<temp->val<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout<<endl;
    }
}
int main()
{
    int a[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n=sizeof(a)/sizeof(a[0]);
    Node *root=construct(a, n);
   // display(root);
   leftBoundary(root);
   leafNode(root);
   rightBoundary(root->right);
}