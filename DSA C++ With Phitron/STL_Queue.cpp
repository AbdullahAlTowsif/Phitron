//STL = Standard Template Library
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(5);
    q.push(10);
    q.push(15);
    cout<<"Q Size: "<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<"Q Size: "<<q.size()<<endl;
    cout<<q.empty()<<endl;

    queue<char>q2;
    q2.push('a');
    q2.push('b');
    q2.push('c');
    cout<<"Q Size: "<<q2.size()<<endl;
    cout<<q2.empty()<<endl;
    cout<<q2.front()<<endl;
    q2.pop();
    cout<<q2.front()<<endl;
    q2.pop();
    cout<<q2.front()<<endl;
    q2.pop();
    cout<<"Q Size: "<<q2.size()<<endl;
    cout<<q2.empty()<<endl;
    return 0;
}