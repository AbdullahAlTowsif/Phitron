#include<bits/stdc++.h>
using namespace std;
string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();
    return s;
}
void erase_fst_lst(string &ns)
{
    ns.erase(ns.begin());
    ns.pop_back();
    cout<<"String of function is :"<<ns<<endl;
}
int main()
{
    string s;
    cout<<"Input a string :";
    getline(cin,s);
    string ans=erase_first_last(s);
    cout<<ans<<endl;
    string ns;
    cout<<"Input a new string :";
    getline(cin,ns);
    erase_fst_lst(ns);
    cout<<"Main function string is :"<<ns<<endl;
}