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

    // 1. handle base case
    for(int i=0;i<=n;i++)
    {
        dp[i][m] = 0;
    }
    for(int j=0;j<=m;j++)
    {
        dp[n][j] = 0;
    }

    // 2. loop over the states
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=0;j--)
        {
            // 2.1. calculate answer from sub-problems
            if(s[i] == t[j])
            {
                dp[i][j] = 1+ dp[i+1][j+1];
            }
            else
            {
                dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }
    cout<<dp[0][0]<<endl;
    return 0;
}







/*

- LCS(i,j) -> Length of longest common subsequence between strings s[i..n] and t[j..m]

- LCS(i,j) = 1 + LCS(i+1, j+1) if s[i] == t[j]
            else max{LCS(i+1, j), LCS(i, j+1)}

- base case: LCS(i,m) = 0 
             LCS(n,j) = 0

Input:
axyb
abyxb

Output:
3

*/