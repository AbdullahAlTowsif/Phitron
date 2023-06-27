// Problem Link: https://atcoder.jp/contests/dp/tasks/dp_d
// coding with memorization

#include<bits/stdc++.h>
using namespace std;

const int N=102;
const int C=1e5+5;

long long dp[N][C];
int wt[N],val[N];

long long knapsack(int n, int cap)
{
    //1. base case
    if(n==0)
    {
        return 0;
    }

    //2. if result is already calculated for this sate return it
    if(dp[n][cap]!=-1)
    {
        return dp[n][cap];
    }

    if(cap<wt[n])
    {
        long long ans=knapsack(n-1,cap);
        dp[n][cap]=ans;
        return ans;
    }

    long long ans1= val[n] + knapsack(n-1, cap-wt[n]);
    long long ans2= knapsack(n-1,cap);
    long long ans=max(ans1,ans2);
    dp[n][cap]=ans;

    return ans;
}
int main()
{
    int n,cap;
    cin>>n>>cap;

    for(int i=1;i<=n;i++)
    {
        cin>>wt[i]>>val[i];
    }

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=cap;j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<knapsack(n,cap)<<endl;
}



/*

1. state: knapsack(n,cap) -> maximum profit considering objects 1 to n and capacity cap
2. recurrence:
    knapsack(n,cap) -> max{
        val[n] + knapsack(n-1,cap - wt[n]), knapsack(n-1, cap)
    }
3. base_case: knapsack(0,x) = 0

Input:
3 8
3 30
4 50
5 60

Output:
90

*/