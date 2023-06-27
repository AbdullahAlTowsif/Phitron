#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int std_id;
    int age;

    student(string name,int std_id,int age)
    {
        this->name=name;
        this->std_id=std_id;
        this->age=age;
    }

    void printInfo()
    {
        cout<<name<<" "<<std_id<<" "<<age<<endl;
    }
};
int main()
{
    student *s =new student("B",20,30);
    s->printInfo();
    (*s).printInfo();
}