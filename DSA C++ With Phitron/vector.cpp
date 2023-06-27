#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    for(int i=0;i<10;i++)
    {
        a.push_back(i);
    }
    a.insert(a.begin()+5,900);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    a.erase(a.begin()+0);
    cout<<"After delete"<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}