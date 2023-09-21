// Adjacency Matrix Graph Representation

/*

Graph Representation
====================

Basically Adjacency Matrix is a 2d Array

0 ---- 1
      / \
    2 --- 3

Total Nodes: 4
Total Edge = 4
Undirected + Unweighted

matrix -> no of nodes * no of nodes
        -> 4 * 4

matrix[i][j] = 1
    if and only if (i -> j)

0 -> 1
1 -> 0
1 -> 2
2 -> 1
2 -> 3
3 -> 2
3 -> 1
1 -> 3

# Time Complexity: O(n^2)
# Space Complexity: O(n^2)

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes = 4;
    
    int matrix[nodes][nodes];

    // int matrix[nodes][nodes] = {};

    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            matrix[i][j] = 0;
        }
    }

    matrix[0][1] = 1;
    matrix[1][0] = 1;
    matrix[1][2] = 1;
    matrix[2][1] = 1;
    matrix[2][3] = 1;
    matrix[3][2] = 1;
    matrix[3][1] = 1;
    matrix[1][3] = 1;

    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}