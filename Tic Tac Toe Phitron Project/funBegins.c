#include<stdio.h>
#include<stdbool.h>
int whoWins(int a[][4],int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][1]==a[i][2] && a[i][2]==a[i][3] && a[i][1]!=-1)
            {
                return a[i][1];
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[1][j]==a[2][j] && a[2][j]==a[3][j] && a[1][j]!=-1)
            {
                return a[1][j];
            }
        }
    }
    if(a[1][1]==a[2][2] && a[2][2]==a[3][3] && a[1][1]!=-1)
    {
        return a[1][1];
    }
    if(a[1][3]==a[2][2] && a[2][2]==a[3][1] && a[1][3]!=-1)
    {
        return a[1][3];
    }
    return -1;
}
void printWin(int a[][4],int n,int who)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==who)
            {
                if(a[i][j]==1)
                printf("X");
                else
                printf("O");
            }
            else
            printf(" ");
            if(j<n)
            printf("\t|\t");
        }
        printf("\n");
        if(i<n)
        printf("_________________________________");
        printf("\n\n");
    }
}
void printCell(int a[][4],int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==-1)
            printf(" ");
            if(a[i][j]==1)
            printf("X");
            if(a[i][j]==2)
            printf("O");
            if(j<n)
            printf("\t|\t");
        }
        printf("\n");
        if(i<n)
        printf("_________________________________");
        printf("\n\n");
    }
}
int main()
{
    int n=3;
    int a[4][4];
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=-1;
        }
    }
    bool player1=true;
    bool player2=false;
    while(true)
    {
        printCell(a,n);
        if(player1)
        {
            int r,c;
            Flag1:
            printf("Player 1 turn(X), Enter row and column :");
            scanf("%d%d",&r,&c);
            if(a[r][c]!=-1)
            {
                printf("Invalid cell\n");
                goto Flag1;
            }
            a[r][c]=1;
            player1=false;
            player2=true;
        }
        else
        {
            int r,c;
            Flag2:
            printf("Player 2 turn(O), Enter row and column :");
            scanf("%d%d",&r,&c);
            if(a[r][c]!=-1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            a[r][c]=2;
            player2=false;
            player1=true;
        }
        if(whoWins(a,n)==1)
        {
        printf("Player 1 Won!!!\n");
        printWin(a,n,1);
        break;
        }
        else if(whoWins(a,n)==2)
        {
        printf("Player 2 Won!!!\n");
        printWin(a,n,2);
        break;
        }
    }
    
}