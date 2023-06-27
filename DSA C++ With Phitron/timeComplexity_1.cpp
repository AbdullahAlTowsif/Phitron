//O(1) = Constant Complexity
#include<bits/stdc++.h>
using namespace std;
/*Time Complexity O(1)
Memory Complexity O(1)*/
int main()
{
    int a,b,c,sum,mul,maxi,mini;
    cout<<"Enter three numbers :";
    cin>>a>>b>>c;
    sum=a+b+c;
    mul=a*b*c;
    maxi=max({a,b,c});
    mini=min({a,b,c});
    cout<<"Summation :"<<sum<<endl;
    cout<<"Multiplication :"<<mul<<endl;
    cout<<"Maximum :"<<maxi<<endl;
    cout<<"Minimum :"<<mini<<endl;
    return 0;
}