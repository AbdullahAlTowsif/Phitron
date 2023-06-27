//Sorting a Stack. TC=O(n^2)
//Template based stack using Doubly Linked List
#include<bits/stdc++.h>
using namespace std;
template<class T>
class node
{
public:
    T data;
    node* nxt;
    node* prv;
};
template<class T>
class DoublyLL
{
public:
    node<T> *head;
    int sz;
    DoublyLL()
    {
        head=NULL;
        sz=0;
    }
    //Creates a new node with the given data and returns it
    //TC=O(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode=new node<T>;
        newnode->data=data;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }
    //Insert a node with given data at head
    //TC=O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode=CreateNewNode(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        node<T> *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;
    }
    //Deletes the value at head
    //TC=O(1)
    void DeleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        node<T> *a=head;
        node<T> *b=head->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv=NULL;
        }
        head=b;
        sz--;
    }
    //returns the size of linked list
    //TC=O(1)
    int getsize()
    {
        return sz;
    }
};
//Stack using doubly linked list
template<class T>
class Stack
{
public:
    DoublyLL<T> dl;
    Stack()
    {

    }
    T top()
    {
        if(dl.getsize()==0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return dl.head->data;
    }
    void push(T val)
    {
        dl.InsertAtHead(val);
    }
    void pop()
    {
        if(dl.getsize()==0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
    int getSize()
    {
        return dl.getsize();
    }
};
int main()
{
    Stack<int>st;
    st.push(5);
    st.push(2);
    st.push(7);
    st.push(8);
    st.push(3);
    Stack<int>tmp;
    while(st.getSize()>0)
    {
        int t=st.top();
        st.pop();
        while(tmp.getSize()>0)
        {
            if(tmp.top()<t)
            {
                break;
            }
            st.push(tmp.top());
            tmp.pop();
        }
        tmp.push(t);
    }
    swap(st,tmp);
    while(st.getSize()>0)
    {
        cout<<st.top()<<"\n";
        st.pop();
    }
    return 0;
}