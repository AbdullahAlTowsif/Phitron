//Queue using static Array
#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE=500;
class Queue{
public:
    int a[MAX_SIZE];
    int l,r;//l is the start point of Q, r is the end point of Q
    Queue()
    {
        l=0;
        r=-1;
    }
    //All Time Complexity : O(1)
    void enqueue(int value)
    {
        if(r+1>=MAX_SIZE)
        {
            cout<<"Queue is full\n";
            return;
        }
        r++;
        a[r]=value;
    }
    void dequeue()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
    }
    int front()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }
    int size()
    {
        return r-l+1;
    }
};
int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<"Queue size :"<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<"Queue size :"<<q.size()<<endl;
    return 0;
}