#include <bits/stdc++.h>
using namespace std;
class Maxheapify{
    vector<int>hp;
    void upheapify(int ci)
    {
        while(ci>0)
        {
            int pi=(ci-1)/2;
            if(hp[pi]<hp[ci])
            {
                swap(hp[ci], hp[pi]);
                ci=pi;
            }
            else break;
        }
    }
    void downheapify(int idx)
    {
        while(idx<hp.size())
        {
            int lc=2*idx+1;
            int rc=2*idx+2;
            if(lc>=hp.size()) break;
            int maxele=idx;
            if(hp[lc]>hp[maxele]) maxele=lc;
            if(rc<hp.size() && hp[rc]>hp[maxele]) maxele=rc;
            if(maxele!=idx)
            {
                swap(hp[maxele], hp[idx]);
                idx=maxele;
            }
            else break;
        }
    }
public:
    void display()
    {
        for(int i=0; i<hp.size(); i++) cout<<hp[i]<<" ";
        cout<<endl;
    }
    bool empty()
    {
        return hp.size()==0;
    }
    int peak()
    {
        if(empty()) return INT_MIN;
        return hp[0];
    }
    void push(int ele)
    {
        hp.push_back(ele);
        upheapify(hp.size()-1);
    }
    void pop()
    {
        if(empty()) return;
        swap(hp[0], hp[hp.size()-1]);
        hp.pop_back();
        if(!empty()) downheapify(0);
    }
    void popCustom(int idx)
    {
        hp[idx]=INT_MAX;
        upheapify(idx);
        swap(hp[0], hp[hp.size()-1]);
        hp.pop_back();
        if(!empty()) downheapify(0);
    }
};
int main()
{
    Maxheapify hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    hp.pop();
    hp.display();
    hp.popCustom(2);
    hp.display();
    return 0;
}