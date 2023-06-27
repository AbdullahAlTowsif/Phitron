#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    int i;
    cout<<"Enter the array elements :"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"Printing Array elements"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
    int sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    cout<<"The sum of the array :";
    cout<<sum<<endl;
    return 0;
}