#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="I am gonna eat polao tonight";
    string s2=" and I'm very much excited about it";
    string s3=s+s2;
    cout<<s3<<endl;
    cout<<s[5]<<endl;
    cout<<s.size()<<endl;
    for(int i=0;i<s.size();i++)
    {
        s[i]=s[i]+1;
    }
    cout<<"New String is"<<endl;
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s2.erase(s2.begin()+2);
    cout<<s2<<endl;
    cout<<"Input a string :";
    string ns;
    getline(cin,ns);
    ns.erase(ns.begin());
    ns.pop_back();
    cout<<ns<<endl;
}