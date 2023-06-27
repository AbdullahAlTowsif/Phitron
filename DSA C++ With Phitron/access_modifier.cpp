//Public
#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int age;
    int std_id;
    void printInfo()
    {
        cout<<name<<" "<<age<<" "<<std_id<<endl;
    }
};
int main()
{
    student s1;
    s1.name="Abdullah Al Towsif";
    s1.age=20;
    s1.std_id=2102061;
    s1.printInfo();
}