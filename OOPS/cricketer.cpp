#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cricketer{
    public:
    string name;
    int age;
    int match;
    int avg;
};

int main()
{
    vector<Cricketer>cricketers;
    
    for(int i=0; i<5; i++)
    {
        Cricketer *cricketer = new Cricketer;
        cout<<"Enter Name: ";
        cin>>cricketer->name;
        cout<<"Enter Age: ";
        cin>>cricketer->age;
        cout<<"Enter no of Matches: ";
        cin>>cricketer->match;
        cout<<"Enter Average Score: ";
        cin>>cricketer->avg;

        cricketers.push_back(*cricketer);
    }

    for(int i=0; i<5; i++)
    {
        cout<<"Name"<<i<<": "<<cricketers[i].name<<endl;
        cout<<"Age"<<i<<": "<<cricketers[i].age<<endl;
        cout<<"No. of Matches"<<i<<": "<<cricketers[i].match<<endl;
        cout<<"Average Score"<<i<<": "<<cricketers[i].avg<<endl;
    }
    return 0;
}