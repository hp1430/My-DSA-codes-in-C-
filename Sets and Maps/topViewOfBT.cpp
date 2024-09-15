#include<iostream>
#include<unordered_map>
#include<queue>
#include<climits>
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

Node* construct(vector<int> &arr)
{
    queue<Node*>q;
    Node *root=new Node(arr[0]);
    q.push(root);
    int i=1, j=2;
    int n=arr.size();
    while(q.size()>0 && i<n)
    {
        Node *temp=q.front();
        q.pop();
        Node *l, *r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(arr[j]!=INT_MIN) r=new Node(arr[j]);
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

void top(Node *root)
{
    unordered_map<int, int>m;
    queue< pair<Node*, int> >q;
    pair<Node*, int>r;
    r.first=root;
    r.second=0;
    q.push(r);
    while(q.size()>0)
    {
        Node *temp=(q.front()).first;
        int level= (q.front()).second;
        q.pop();
        if(m.find(level)==m.end())
        {
            m[level]=temp->val;
        }
        if(temp->left)
        {
            pair<Node*, int>p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        }
        if(temp->right)
        {
            pair<Node*, int>p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }
    }
    int minlevel=INT_MAX;
    int maxlevel=INT_MIN;
    for(auto x : m)
    {
        int level=x.first;
        minlevel=min(minlevel, level);
        maxlevel=max(maxlevel, level);
    }
    for(int i=minlevel; i<=maxlevel; i++)
    {
        cout<<m[i]<<" ";
    }
    cout<<endl;
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
    vector<int>arr={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    Node *root=construct(arr);
    display(root);
    top(root);
}