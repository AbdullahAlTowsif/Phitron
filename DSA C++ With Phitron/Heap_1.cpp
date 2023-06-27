//Max Heap Implementing
#include<bits/stdc++.h>
using namespace std;
class MaxHeap
{
public:
    vector<int>node;
    MaxHeap()
    {

    }
    //Time Complexity: O(log n)
    void up_heapify(int idx)
    {
        while (idx>0 && node[idx]>node[(idx-1)/2])
        {
            swap(node[idx],node[(idx-1)/2]);
            idx=(idx-1)/2;
        }
        
    }
    //Time Complexity: O(log n)
    void insert(int x)
    {
        node.push_back(x);
        up_heapify(node.size()-1);
    }
    //Time Complexity: O(n)
    void printHeap()
    {
        for(int i=0;i<node.size();i++)
        {
            cout<<node[i]<<" ";
        }
        cout<<endl;
    }
    //Time Complexity: O(log n)
    void down_heapify(int idx)
    {
        while(1)
        {
            int largest=idx;
            int l=2*idx+1;
            int r=2*idx+2;
            if(l<node.size() && node[largest]<node[l])
            {
                largest=l;
            }
            if(r<node.size() && node[largest]<node[r])
            {
                largest=r;
            }
            if(largest==idx)
            {
                break;
            }
            swap(node[idx],node[largest]);
            idx=largest;
        }
    }
    void Delete(int idx)
    {
        if(idx>=node.size())
        {
            return;
        }
        swap(node[idx],node[node.size()-1]);
        node.pop_back();
        down_heapify(idx);
    }
    //Time Complexity: O(1)
    int getMax()
    {
        if(node.empty())
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        return node[0];
    }
    //Time complexity O(logn)
    /*ExtractMax function used to show the max value of 
    the index and at the same time is used to delete it*/
    int ExtractMax()
    {
        if(node.empty())
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        int show=node[0];
        Delete(0);
        return show;
    }
    void build_from_array(vector<int>&a)
    {
        node=a;
        int n=node.size();
        int last_non_leaf=n/2-1;
        for(int i=last_non_leaf;i>=0;i--)
        {
            down_heapify(i);
        }
    }
};
int main()
{
    MaxHeap MHeap;
    MHeap.insert(4);
    MHeap.insert(7);
    MHeap.insert(9);
    MHeap.insert(1);
    MHeap.insert(10);
    MHeap.insert(20);
    MHeap.insert(30);
    cout<<"Max element: "<<MHeap.getMax()<<endl;
    MHeap.printHeap();
    MHeap.Delete(0);
    MHeap.printHeap();
    vector<int>a={1,2,3,4,10,9,8,7};
    MHeap.build_from_array(a);
    MHeap.printHeap();
    return 0;
}