#include<bits/stdc++.h>
using namespace std;
const int N = 101;
const int M = 1e5+5;

int num[N];
int dp[N][M];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
    {
        cin>>num[i];
    }
    // 1. handle base case
    dp[0][0] = 1;
    for(int i=1;i<=m;i++)
    {
        dp[0][i] = 0;
    }

    // 2. loop over the states
    for(int i=1;i<=m;i++)
    {
        for(int target=1;target<=m;target++)
        {
            //2.1. calculate answer from smaller sub-problems
            int ans1 = dp[i-1][target];
            if(target<num[i])
            {
                dp[i][target] = ans1;
            }
            else
            {
                int ans2 = dp[i-1][target - num[i]];
                dp[i][target] = ans1 or ans2;
            }
        }
    }

    cout<<dp[n][m]<<endl;
    return 0;
}

/*

- state: fun(n,target) -> returns true if it is possible to create a subset from nyumbers
    1 to n and form the sum "target"

- recurrance: fun(n, target) -> fun(n-1, target) OR
                                fun(n-1, target - num[n]) if target => num[n]

- base case: fun(0, target) -> 1 if target >= 0 else 0

Input:
6 9
3 34 4 12 5 2

Output:
1

*/