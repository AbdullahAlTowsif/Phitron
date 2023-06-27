// Problem Link: https://atcoder.jp/contests/dp/tasks/dp_d
// Coding with Tabulation

#include<bits/stdc++.h>
using namespace std;

const int N = 102;
const int C = 1e5+5;

long long dp[N][C];
int wt[N],val[C];

int main()
{
    int n,w;
    cin>>n>>w;

    for(int i=1;i<=n;i++)
    {
        cin>>wt[i]>>val[i];
    }

    //1. handle base case
    for(int i=0;i<=w;i++)
    {
        dp[0][i] = 0;
    }

    //2. loop over the states
    for(int i=1;i<=n;i++)
    {
        for(int cap = 0;cap<=w;cap++)
        {
            //2.1. calculate the result from smaller sub-problems
            if(cap<wt[i])
            {
                dp[i][cap]=dp[i-1][cap];
            }
            else
            {
                dp[i][cap]=max(val[i]+dp[i-1][cap-wt[i]],dp[i-1][cap]);
            }
        }
    }

    cout<<dp[n][w]<<endl;
    return 0;
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