#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    student (string s,int id,int ag,string f_name,string m_name)
    {
        name=s; //this->name=name (if both class and parameter name are same)
        std_id=id;
        age=ag;
        fathers_name=f_name;
        mothers_name=m_name;
    }

    student(string s,int id,int ag) //constructor overload
    {
        name=s;
        std_id=id;
        age=ag;
    }

    student() //Empty constructor
    {

    }

    void printInfo()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<endl;
    }
};
int main()
{
    student s("A",10,20,"B","C");
    s.printInfo();

    student s2("A",10,20);
    s2.printInfo();

    student s3;
}