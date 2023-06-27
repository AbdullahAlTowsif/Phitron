#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={3,5,1,4,2};
    // for(int i=0;i<a.size();i++)
    // cout<<a[i]<<" "<<endl;
    // sort(a.begin(),a.end());
    // cout<<"After sorting"<<endl;
    // for(int i=0;i<a.size();i++)
    // cout<<a[i]<<" "<<endl;
    sort(a.begin()+1,a.begin()+2+1);
    cout<<"Sorting only middle elements"<<endl;
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" "<<endl;
}