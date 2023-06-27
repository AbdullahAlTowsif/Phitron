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
    void InsertAtAnyIndex(int index,int value)
    {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a=head;
        int curr_index=0;
        while(curr_index!=index-1)
        {
            a=a->next;
            curr_index++;
        }
        node *newnode=CreatenewNode(value);
        newnode->next=a->next;
        a->next=newnode;
    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(20);
    l.InsertAtHead(40);
    l.Traverse();
    l.InsertAtAnyIndex(1,100);
    l.Traverse();
    cout<<l.getSize()<<endl;
}