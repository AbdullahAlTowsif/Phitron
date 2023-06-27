//This code shows the regular syntax of stack
//All opetations works in O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    //push
    st.push(10);
    st.push(20);
    st.push(30);
    //size
    cout<<"Stack size :"<<st.size()<<endl;
    //top
    cout<<st.top()<<endl;
    //pop
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<"Stack size :"<<st.size()<<endl;
}
