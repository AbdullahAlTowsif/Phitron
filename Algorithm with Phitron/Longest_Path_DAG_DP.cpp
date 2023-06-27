// Code with memorization
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>parent_list[N];

int dp[N];
int root,target_node;

int max_distance(int node)
{
    // 1. base case
    if(node == root)
    {
        return 0;
    }

    // 2. return result if already calculated
    if(dp[node]!=-1)
    {
        return dp[node];
    }

    // 3. calculate result from smaller nodes
    int ans = 0;
    for(int parent: parent_list[node])
    {
        int parent_dist = max_distance(parent);
        ans = max(ans,parent_dist);
    }
    dp[node] = ans+1;
    return dp[node];
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        parent_list[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        dp[i] = -1;
    }

    cin>>root>>target_node;

    cout<<max_distance(target_node)<<endl;
    return 0;
}


/*

- state: f(n) -> longest distance from root to node n
- recurrance: f(n) -> max{f(p_1), f(p_2), ... f(p_m)}+1
                    where p_i is an immediate parent of node n
- base case: f(root) = 0

Input:
4 4
1 3
3 4
1 4
4 2
1 2

Output:
4

*/