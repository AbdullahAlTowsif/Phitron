//Stack using Singly Linked List
#include <bits/stdc++.h>
using namespace std;
class node {
public:
    int data;
    node* next;
};

class SinglyLL
{
public:
    node* head;
    int sz;

    SinglyLL()
    {
        head = NULL;
        sz=0;
    }
    // Creates a new node with the given data and returns it
    node* CreateNewNode(int data)
    {
        node* newnode=new node;
        newnode->data=data;
        newnode->next=NULL;
        return newnode;
    }

    void InsertAtHead(int data)
    {
        sz++;
        node* newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head=newnode;
            return;
        }
        node* a=head;
        newnode->next=a;
        head=newnode;
    }

    void DeleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }

        node* a=head;
        node* b = head->next;
        delete a;

        head=b;
        sz--;
    }

    void Traverse()
    {
        node* a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<endl;
    }

    int getsize()
    {
        return sz;
    }
};

// Stack class using singly linked list
class Stack {
public:
    SinglyLL sl;
    Stack()
    {

    }

    int top()
    {
        if(sl.getsize()==0)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return sl.head->data;
    }

    // Push an element onto the stack
    void push(int data) 
    {
        sl.InsertAtHead(data);
    }

    // Pop an element from the stack
    void pop() 
    {
        if(sl.getsize()==0)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        sl.DeleteAtHead();
    }
};

// Example usage
int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout<<stack.top()<<endl;

    stack.pop();
    stack.pop();
    cout<<stack.top()<<endl;

    return 0;
}
