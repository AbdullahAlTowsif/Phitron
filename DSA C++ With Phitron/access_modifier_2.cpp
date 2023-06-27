//protected
#include<bits/stdc++.h>
using namespace std;
class user
{
protected:
    string name;
    int age;
};
class admin:user //Inherited Class
{
private:
    string designation;
public:
    void set(string s,int ag,string dg)
    {
        name=s;
        age=ag;
        designation=dg;
    }
    void print()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<designation<<endl;
    }
};
int main()
{
    admin ad;
    ad.set("A",20,"D");
    ad.print();
}