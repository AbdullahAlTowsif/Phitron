#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return fact(n-1)*n;
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"Factorial is :"<<fact(n)<<endl;
    return 0;
}