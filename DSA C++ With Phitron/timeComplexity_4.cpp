#include<bits/stdc++.h>
using namespace std;
/*Time Complexity :O(2^n)
Memory Complexity :O(n)*/
int called=0;
int fibo(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int x=fibo(n-1);
    called++;
    int y=fibo(n-2);
    called++;
    return x+y;
}
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    cout<<"Fib :"<<fibo(n)<<endl;
    cout<<"Called :"<<called<<endl;
    return 0;

}
//Time Complexity is 2^n cause in recursion every single matter calls 2 diffrent matters.