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
    int flag=0;
    int pos=0;
    int key;
    cout<<"Enter the key value you want to search :";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            pos=i+1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Key value is found\n";
        cout<<"The position of the key value is :"<<pos<<endl;
    }
    else
    cout<<"Key value is not found\n";
}