#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Input a number :";
    cin>>n;
    int *x=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
    }
    delete[] x;
    return 0;
}