#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(5);
    ms.insert(7);
    ms.insert(4);
    ms.insert(3);
    ms.insert(4);
    ms.insert(7);
    for(auto i:ms)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of multiset: "<<ms.size()<<endl;
    //erase all occurence
    ms.erase(4);
    for(auto i:ms)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //erase single occurence
    ms.erase(ms.find(7));
    for(auto i:ms)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}