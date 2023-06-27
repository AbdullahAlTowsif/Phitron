// Problem Link: https://atcoder.jp/contests/dp/tasks/dp_c
// Iterative way

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;

int happiness[N][4],dp[N][4];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>happiness[i][j];
        }
    }
    // 1. handle base case

    for(int task = 1;task<=3;task++)
    {
        dp[1][task] = happiness[1][task];
    }
    // 2. loop over the states
    for(int day = 1;day<=n;day++)
    {
        for(int current_task = 1;current_task<=3;current_task++)
        {
            // 2.1. calculate answer from smaller sub-problems
            int max_profit = 0;
            for(int last_task = 1;last_task<=3;last_task++)
            {
                if(last_task!=current_task)
                {
                    int current_profit = dp[day-1][last_task] + happiness[day][current_task];
                    max_profit = max(max_profit,current_profit);
                }
            }
            dp[day][current_task]=max_profit;
        }
    }
    int ans=max({dp[n][1],dp[n][2],dp[n][3]});
    cout<<ans<<endl;
    return 0;
}

/*

- state: fun(n,x) -> maximum happiness till day-n if we pick task -x on day n

- recurrance: fun(n,x) = max{
    fun(n-1,y) where x!=y + happiness[n][x]
}

- base case: fun(1,x) = happiness[n][x]

Input:
3
10 40 70
20 50 80
30 60 90

Output:
210

*/