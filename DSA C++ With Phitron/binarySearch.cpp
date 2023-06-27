#include<bits/stdc++.h>
using namespace std;
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
    int key;
    cout<<"Enter the key value you want to search :";
    cin>>key;
    int mid,beg=0,nd=n,flag=0;
    while(beg<=nd)
    {
        mid=(beg+nd)/2;
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(a[mid]<key)
        {
            beg=mid+1;
        }
        else
        {
            nd=mid-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1] && a[i+1]==key)
        {
            cout<<"Yes\n";
            return 0;
        }
    }
    cout<<"No\n";
    return 0;
}
