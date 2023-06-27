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

    void printInfo()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }
};
int main()
{
    student s;
    s.name="Towsif";
    s.std_id=2102061;
    s.age=21;
    s.fathers_name="Hello";
    s.mothers_name="Hi";

    student s2;
    s2.name="Abdullah";
    s2.std_id=210206;
    s2.age=20;
    s2.fathers_name="Good";
    s2.mothers_name="Morning";

    s.printInfo();
    s2.printInfo();
    return 0;
}