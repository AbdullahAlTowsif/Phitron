// LCS : Longest Common Subsequence

#include<bits/stdc++.h>
using namespace std;
const int N = 3003;

int dp[N][N];
int n,m;
string s,t;

int main()
{
    cin>>s>>t;

    n = s.size();
    m = t.size();

    // 1. base case
    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 0;
    }
    for(int j=0;j<=m;j++)
    {
        dp[0][j] = 0;
    }

    // 2. loop over the states
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            // 2.1. calculate answer from smaller sub-problems
            if(s[i-1] == t[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout<<dp[n][m]<<endl;
    return 0;
}



/*

- state: LCS(i,j) -> Length of longest common subsequence 
              between strings s[0..i] and t[0..j]

- recurrance: LCS(i,j) = 1 + LCS(i-1, j-1) if s[i] == t[j]
            else max{LCS(i-1, j), LCS(i, j-1)}

- base case: LCS(i,0) = 0 
             LCS(0,j) = 0

Input:
axyb
abyxb

Output:
3

*/