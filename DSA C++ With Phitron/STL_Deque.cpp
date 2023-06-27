#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(5);
    dq.push_back(10);
    dq.push_back(15);
    dq.push_front(20);
    dq.pop_back();
    dq.pop_front();
    cout<<"Size of Deque: "<<dq.size()<<endl;
    cout<<"Front data: "<<dq.front()<<endl;
    cout<<"Back data: "<<dq.back()<<endl;
}