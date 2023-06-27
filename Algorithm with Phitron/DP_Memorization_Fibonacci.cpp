#include<bits/stdc++.h>
using namespace std;
const int N = 101;

int dp[N];
int fib(int n)
{
    // base case
    if(n<=2) return 1;

    // check if current state is already solved
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int ans = fib(n-1) + fib(n-2);
    dp[n] = ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        dp[i] = -1; // marks all state as unvisited
    }
    // memset(dp,-1,sizeof(dp)); -> check if visited/calculated or not

    cout<<fib(n)<<endl;
    return 0;
}



/*

DP Steps:
- fib(n) -> calculates the nth fibonacci number
- fib(n) -> fib(n-1) + fib(n-2)
- fib(1) = 1, fib(2) = 1

*/