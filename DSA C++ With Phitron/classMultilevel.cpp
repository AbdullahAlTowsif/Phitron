#include<bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    person *father,*mother;
    void print_info()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Father's Name :"<<father->name<<endl;
        cout<<"Mother's Name  :"<<mother->name<<endl;
    }
};
int main()
{
    person p;
    p.father=new person;
    p.mother=new person;
    p.name="A";
    p.father->name="B";
    p.mother->name="C";
    p.print_info();
}