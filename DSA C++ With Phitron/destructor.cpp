//This code is is actually copied from apna college
//Coding for a long time so I copied it.Sorry!!!
//Destructor is used when we use new object.
#include<bits/stdc++.h>
using namespace std;
class student
{
    string name;
    public:
    int age;
    bool gender;

    student ()
    {
        cout<<"Default Constructor"<<endl;
    }

    student (string n,int a,int g)
    {
        cout<<"Parameterised Constructor"<<endl;
        name=n;
        age=a;
        gender=g;
    }

    student (student &a)
    {
        cout<<"Copy Constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student()
    {
        cout<<"Destructor called"<<endl;
    }

    void setName(string n)
    {
        name=n;
    }

    void printInfo()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Gender :"<<gender<<endl;
    }
};
int main()
{
    student a("Abdullah Al Towsif",20,1);
    student b;
    student c=a;
}