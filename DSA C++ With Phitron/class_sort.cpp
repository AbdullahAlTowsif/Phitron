#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int age;
    int std_id;

    student(string name,int age,int std_id)
    {
        this->name=name;
        this->age=age;
        this->std_id=std_id;
    }

    void printInfo()
    {
        cout<<name<<" "<<age<<" "<<std_id<<endl;
    }
};
bool comp(student a,student b)
    {
        if(a.std_id==b.std_id)
        {
            return a.age<b.age;
        }
        return a.std_id<b.std_id;
    }
int main()
{
    vector<student>a;
    for(int i=0;i<10;i++)
    {
        a.push_back(student("T",20,20-i));
    }
    for(int i=0;i<10;i++)
    {
       a[i].printInfo(); 
    }
    cout<<"After sorting"<<endl;
    sort(a.begin(),a.end(),comp);
    for(int i=0;i<10;i++)
    {
        a[i].printInfo();
    }
    
}