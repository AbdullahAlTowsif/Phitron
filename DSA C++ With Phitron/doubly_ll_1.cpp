#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* nxt;
    node* prv;
};
class DoublyLL
{
public:
    node* head;
    int sz;
    DoublyLL()
    {
        head=NULL;
        sz=0;
    }
    //Creates a new node with the given data and returns it
    //TC=O(1)
    node *CreateNewNode(int data)
    {
        node *newnode=new node;
        newnode->data=data;
        newnode->nxt=NULL;
        newnode->prv=NULL;
        return newnode;
    }
    //Insert a node with given data at head
    //TC=O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode=CreateNewNode(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        node *a=head;
        newnode->nxt=a;
        a->prv=newnode;
        head=newnode;
    }
    //Inserts the given data at the given index
    //TC=O(n)
    void Insert(int index,int data)
    {
        if(index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a=head;
        int cur_index=0;
        while(cur_index!=index-1)
        {
            a=a->nxt;//a=cur_index-1
            cur_index++;
        }
        node *newnode=CreateNewNode(data);
        newnode->nxt=a->nxt;
        newnode->prv=a;
        node *b=a->nxt;
        b->prv=newnode;
        a->nxt=newnode;
        sz++;
    }
    //Deletes the given index
    //TC=O(n)
    void Delete(int index)
    {
        if(index>=sz)
        {
            cout<<index<<"does not exist\n";
            return;
        }
        node *a=head;
        int cur_index=0;
        while(cur_index!=index)
        {
            a=a->nxt;
            cur_index++;
        }
        node *b=a->prv;
        node *c=a->nxt;
        if(b!=NULL)
        {
            b->nxt=c;
        }
        if(c!=NULL)
        {
            c->prv=b;
        }
        delete a;
        if(index==0)
        {
            head=c;
        }
        sz--;        
    }
    //prints the linked list
    //TC=O(n)
    void Traversr()
    {
        node *a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
    //returns the size of linked list
    //TC=O(1)
    int getsize()
    {
        return sz;
    }
    //Reverse the doubly linked list
    //TC=O(n)
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node *a=head;
        int cur_index=0;
        while(cur_index!=sz-1)
        {
            a=a->nxt;
            cur_index++;
        }
        node *b=head;
        while(b!=NULL)
        {
            swap(b->nxt,b->prv);
            b=b->prv;
        }
        head=a;
    }
};
int main()
{
    DoublyLL dl;
    dl.InsertAtHead(10);
    dl.InsertAtHead(5);
    dl.InsertAtHead(1);
    dl.Traversr();
    dl.Insert(2,100);
    dl.Traversr();
    dl.Delete(1);
    dl.Traversr();
    dl.Reverse();
    dl.Traversr();
    return 0;
}