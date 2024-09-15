#include <iostream>
#include <queue>
using namespace std;
class Maxheapify{
    vector<int>hp;
    void downheapify(int start, int bound)
    {
        while(start<bound)
        {
            int lc=2*start+1;
            int rc=2*start+2;
            if(lc>=bound) break;
            int maxele=start;
            if(hp[lc]>hp[maxele]) maxele=lc;
            if(rc<bound && hp[rc]>hp[maxele]) maxele=rc;
            if(maxele!=start)
            {
                swap(hp[start], hp[maxele]);
                start=maxele;
            }
            else break;
        }
    }
public:
    Maxheapify(vector<int>v)
    {
        hp=v;
        int n=hp.size();
        for(int i=n/2-1; i>=0; i--) downheapify(i, n-1);
    }
    vector<int>sort()
    {
        int i=hp.size()-1;
        while(i>0)
        {
            swap(hp[0], hp[i--]);
            downheapify(0, i+1);
        }
        return hp;
    }
};
void heapSort(vector<int>&v)
{
    Maxheapify hp(v);
    v=hp.sort();
}
int main()
{
    vector<int>v={10,13,1,9,7,4,-1,0,6};
    heapSort(v);
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}