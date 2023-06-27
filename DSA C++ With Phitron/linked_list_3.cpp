/*
Actually this code is similar to "linked_list_2"
But in previous code the get size works at O(n)
In this code we will implement the get size in O(1)
So we are re-writing the code
*/
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
};
class LinkedList
{
public:
    node* head;
    int sz;
    LinkedList()
    {
        head=NULL;
        sz=0;
    }
    //creates a new node with data=value and next=NULL
    node* CreatenewNode(int value)
    {
        node *newnode=new node;
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
    }
    //Insert new value at head
    void InsertAtHead(int value)
    {
        sz++;
        node *a=CreatenewNode(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        //If head is not NULL
        a->next=head;
        head=a;
    }
    //prints the linked list
    void Traverse()
    {
        node* a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
    //search for a single value
    int SearchDistinctValue(int value)
    {
        node* a=head;
        int index=0;
        while (a!=NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a=a->next;
            index++;
        }
        return -1;        
    }
    //search all possible occurence
    void SearchAllValue(int value)
    {
        node* a=head;
        int index=0;
        while(a!=NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" is found at index "<<index<<"\n";
            }
            a=a->next;
            index++;
        }
    }
    int getSize()
    {
        return sz;
    }
};
int main()
{
    LinkedList l;
    cout<<l.getSize()<<endl;
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(20);
    l.InsertAtHead(40);
    cout<<l.getSize()<<endl;
}