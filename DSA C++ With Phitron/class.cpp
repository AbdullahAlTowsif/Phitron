#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int std_id;
    int age;
    void printInfo()
    {
        cout<<name<<" "<<std_id<<" "<<age<<endl;
    }
};
class Rectangle
{
public:
    int width,height;
    int calculate_area()
    {
        return height*width;
    }
    int calculate_perimeter()
    {
        return 2*(height+width);
    }
};
int main()
{
    student s;
    s.name="Towsif";
    s.std_id=2102061;
    s.age=21;
    s.printInfo();

    student s2;
    s2.name="Abdullah";
    s2.std_id=21020611;
    s2.age=20;
    s2.printInfo();

    Rectangle r1,r2;
    r1.height=4;
    r1.width=8;
    cout<<r1.calculate_area()<<endl;
    cout<<r1.calculate_perimeter()<<endl;

    r2.height=3;
    r2.width=9;
    cout<<r2.calculate_area()<<endl;
    cout<<r2.calculate_perimeter()<<endl;
}