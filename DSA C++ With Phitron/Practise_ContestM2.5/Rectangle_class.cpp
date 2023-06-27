#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int width,height;
    int areaCalculate()
    {
        return height*width;
    }
    int perimeterCalc()
    {
        return 2*(height+width);
    }    
};
int main()
{
    Rectangle r1;
    r1.height=4;
    r1.width=2;
    Rectangle r2;
    r2.height=8;
    r2.width=4;
    cout<<r1.areaCalculate()<<"\n";
    cout<<r1.perimeterCalc()<<"\n";
    cout<<r2.areaCalculate()<<"\n";
    cout<<r2.perimeterCalc()<<"\n";
    return 0;
}