#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    //Insert Time Complexity: O(logn)
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);
    //O(n)
    cout<<"Printing Set: ";
    for(auto i: st)
    {
        cout<<i<<" ";
    }
    //O(1)
    cout<<"Set Size: ";
    cout<<st.size()<<endl;
    cout<<"Printing Set: ";
    for(auto j=st.begin();j!=st.end();j++)
    {
        cout<<*j<<" ";
    }
    cout<<endl;
    //Erase Time Complexity: O(logn)
    st.erase(5);
    cout<<"Printing set after erasing: ";
    for(auto i: st)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //Find O(logn)
    if(st.find(7)!=st.end())
    {
        cout<<"7 found\n";
    }
    else
    {
        cout<<"Not found\n";
    }
    return 0;
}