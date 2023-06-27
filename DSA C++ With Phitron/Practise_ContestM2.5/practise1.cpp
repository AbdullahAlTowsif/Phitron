#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int>a;
    a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            ans++;
            continue;
        }
        if(a[i]!=a[i-1])
        {
            ans++;
        }
    }
    cout<<ans<<"\n";
}