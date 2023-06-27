#include<bits/stdc++.h>
using namespace std;
/*Time Complexity = O(n+n^2) = O(n^2)
Memory Complexity = O(n)*/
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    vector<int>a(n); //O(n)
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        string ans="NO\n";
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i]==a[j])
            {
                ans="YES\n";
            }
        }
        cout<<"i = "<<i<<" "<<ans<<endl;
    }
}