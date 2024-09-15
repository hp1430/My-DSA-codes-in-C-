#include<iostream>
#include<string>
using namespace std;
class books
{
private:
    string name;
    int price;
    int pages;
public:
    int countBook(int p)
    {
        if(p<=price) return 1;
        else return 0;
    }
    bool isPresent(string n)
    {
        if(n==name) return true;
        else return false;
    }
    void getname(string s){
        name=s;
    }
    void getprice(int p){
        price=p;
    }
    void getpage(int pa){
        pages=pa;
    }
};

int main()
{
    books meghdoot;
    meghdoot.getname("meghdoot");
    meghdoot.getprice(180);
    meghdoot.getpage(200);
    cout<<meghdoot.countBook(150)<<endl;
    cout<<meghdoot.isPresent("godan")<<endl;
    return 0;
}