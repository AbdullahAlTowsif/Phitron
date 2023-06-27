#include<bits/stdc++.h>
using namespace std;
//Memory Complexity O(n)
class Array
{
private:
    int *arr;
    int cap;
    int sz;
    void increase_size()
    {
        cap=cap*2;
        int *tmp=new int[cap];
        for(int i=0;i<sz;i++)
        {
            tmp[i]=arr[i];
        }
        delete [] arr;
        arr=tmp;
    }
public:
    Array()
    {
        arr=new int[1];
        cap=1;
        sz=0;
    }
    //Time Complexity O(1)
    void push_back(int x)
    {
        if(cap==sz)
        {
            increase_size();
        }
        arr[sz]=x;
        sz++;
    }
    //Time Complexity O(sz-pos) /O(sz)
    void Insert(int pos,int x)
    {
        if(cap==sz)
        {
            increase_size();
        }
        for(int i=sz-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=x;
        sz++;
    }
    //Time Complexity O(sz)
    void print()
    {
        for(int i=0;i<sz;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    //Time Complexity O(1)
    int getsize()
    {
        return sz;
    }
    //Time Complexity O(1)
    int getElement(int idx)
    {
        if(idx>=sz)
        {
            cout<<"Error "<<idx<<"is out of bound!\n";
            return-1;
        }
        return arr[idx];
    }
    //Time Complexity O(1)
    void pop_back()
    {
        if(sz==0)
        {
            cout<<"Current size is 0\n";
            return;
        }
        sz--;
    }
    //Time Complexity O(sz)
    void Erase(int pos)
    {
        if(pos>=sz)
        {
            cout<<"Position does not exist\n";
            return;
        }
        for(int i=pos+1;i<sz;i++)
        {
           arr[i-1]=arr[i];
        }
        sz--;
    }
};
int main()
{
    Array a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(30);
    a.push_back(40);
    a.push_back(50);
    a.Insert(1,5);
    a.print();
    cout<<endl;
    // cout<<a.getsize()<<"\n";
    // for(int i=0;i<a.getsize();i++)
    // {
    //     cout<<a.getElement(i)<<"\n";
    // }
    a.pop_back();
    a.print();
    cout<<endl;
    a.pop_back();
    a.print();
    cout<<endl;
    a.Erase(1);
    a.print();
}