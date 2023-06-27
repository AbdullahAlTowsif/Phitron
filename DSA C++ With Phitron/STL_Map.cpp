#include<bits/stdc++.h>
using namespace std;
int main()
{
    //map e key gula distinct hbe but value gula na
    map<string,int>m;
    //Insert O(logn)
    m["goru"]=1;
    m["chagol"]=2;
    m["vera"]=3;
    //value of a key
    cout<<m["goru"]<<endl;
    cout<<m["vera"]<<endl;
    m["cat"]=2;
    cout<<m["cat"]<<endl;
    //print the map
    for(auto i:m)
    {
        cout<<"Key: "<<i.first<<" , Value: "<<i.second<<endl;
    }
    cout<<m.size()<<endl;
    return 0;
}
//{key,value}