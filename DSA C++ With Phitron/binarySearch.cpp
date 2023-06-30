#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int>a(n);
    
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"Enter the value you want to search : ";
    cin>>key;
    int first=1,last=n;
    int mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==key)
        {
            cout<<"Value is founded!"<<endl;
            return 0;
        }
        else if(a[mid]<key)
        {
             first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    printf("Value is not founded\n");
}
