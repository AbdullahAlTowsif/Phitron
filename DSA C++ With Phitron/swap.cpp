#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=4;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    int minimum=min(a,b);
    cout<<minimum<<endl;
    int maximum=max(a,b);
    cout<<maximum<<endl;
    int m=1,n=2,o=3,p=4,q=5;
    int mini=min({m,n,o,p,q});
    cout<<mini<<endl;
    cout<<"Maximum of more than two numbers"<<endl;
    int x=100,y=200,z=199;
    int maxi=max({x,y,z});
    cout<<maxi<<endl;
    return 0;
}