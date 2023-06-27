#include<bits/stdc++.h>
using namespace std;
void print(list<int>l)
{
    //print time complexity O(n)
    //list<int>::iterator a=l.begin();
    auto a=l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
}
//insert at any index . O(n)
void Insert(list<int>&l,int index,int value)
{
    auto it=l.begin();
    advance(it,index);
    l.insert(it,value);
}
//Deletes value at any index . O(n)
void Delete(list<int>&l,int index)
{
    auto it=l.begin();
    advance(it,index);
    l.erase(it);
}
int main()
{
    list<int>l;
    //push front time complexity O(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    print(l);
    //push back time complexity O(1)
    l.push_back(40);
    l.push_back(50);
    print(l);
    //pop back time complexity O(1)
    l.pop_back();
    print(l);
    //pop front time complexity O(1)
    l.pop_front();
    print(l);
    Insert(l,1,100);
    print(l);
    Delete(l,2);
    print(l);
    cout<<l.size()<<endl;
    return 0;
}