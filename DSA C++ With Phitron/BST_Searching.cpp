//BST = Binary Search Tree
#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int value;
    node* Left;
    node* Right;
};
class BST{
public:
    node* root;
    BST()
    {
        root=NULL;
    }
    node* CreateNewNode(int value)
    {
        node* newnode=new node;
        newnode->value=value;
        newnode->Left=NULL;
        newnode->Right=NULL;
        return newnode;
    }
    void BFS()
    {
        if(root==NULL)
        {
            return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* a=q.front();
            q.pop();
            int p=-1,l=-1,r=-1;
            if(a->Left!=NULL)
            {
                l=a->Left->value;
                q.push(a->Left);
            }
            if(a->Right!=NULL)
            {
                r=a->Right->value;
                q.push(a->Right);
            }
            cout<<"Node Value = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<endl;
        }
    }
    void Insert(int value)
    {
        node* newnode=CreateNewNode(value);
        if(root==NULL)
        {
            root=newnode;
            return;
        }
        node* current=root;
        node* prv=NULL;
        while(current!=NULL)
        {
            if(newnode->value>current->value)
            {
                prv=current;
                current=current->Right;
            }
            else
            {
                prv=current;
                current=current->Left;
            }
        }
        if(newnode->value>prv->value)
        {
            prv->Right=newnode;
        }
        else
        {
            prv->Left=newnode;
        }
    }
    bool Search(int value)
    {
        node* current=root;
        while(current!=NULL)
        {
            if(value>current->value)
            {
                current=current->Right;
            }
            else if(value<current->value)
            {
                current=current->Left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    BST bst;
    bst.Insert(6);
    bst.Insert(4);
    bst.Insert(3);
    bst.Insert(5);
    bst.Insert(7);
    bst.Insert(8);
    bst.BFS();
    cout<<bst.Search(1)<<endl;
    cout<<bst.Search(7)<<endl;
    return 0;
}