#include<bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}
int main()
{
    int x,y;
    cout<<"Input two numbers :";
    cin>>x>>y;
    swap(x,y);
    cout<<"After swapping :"<<x<<" "<<y<<endl;
    return 0;
}