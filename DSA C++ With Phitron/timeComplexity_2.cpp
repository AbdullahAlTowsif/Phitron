#include<bits/stdc++.h>
using namespace std;
/*Time Complexity = O(n+1+n+1) = O(2*n+1) = O(2*n) = O(c*n) = O(n)
Memory Complexity = O(n)*/
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxi=a[0];
    int mini=a[0];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
        sum=sum+a[i];
    }
    cout<<"Maximum :"<<maxi<<endl;
    cout<<"Minimum :"<<mini<<endl;
    cout<<"Summation :"<<sum<<endl;
    return 0;
}