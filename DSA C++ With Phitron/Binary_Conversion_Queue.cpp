#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    queue<string>q;
    q.push("1");
    for(int i=1;i<=n;i++){
        cout<<"Binary Representation of "<<i<<": "<<q.front()<<endl;
        string tmp=q.front();
        q.pop();
        q.push(tmp+"0");
        q.push(tmp+"1");
    }
}