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
    LinkedList()
    {
        head=NULL;
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
    //Size of Linked List
    //This Function Works at O(n)
    int getSize()
    {
        int sz=0;
        node* a=head;
        while(a!=NULL)
        {
            sz++;
            a=a->next;
        }
        return sz;
    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(20);
    // l.Traverse();
    // cout<<"10 is found at "<<l.SearchDistinctValue(10)<<"\n";
    // cout<<"5 is found at "<<l.SearchDistinctValue(5)<<"\n";
    // cout<<"30 is found at "<<l.SearchDistinctValue(30)<<"\n";
    // l.SearchAllValue(30);
    cout<<l.getSize()<<endl;
}