//private
#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int std_id;
    int age;
public:
    void print_Info()
    {
        cout<<name<<" "<<std_id<<" "<<age<<endl;
    }
    void setInformation(string s,int id,int ag)
    {
        name=s;
        std_id=id;
        age=ag;
    }
};
int main()
{
    student s1;
    s1.setInformation("A",61,20);
    s1.print_Info();
}