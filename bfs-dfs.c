#include <stdio.h>
int v,e,visited[50],a[100][100],i,j,v1,v2;
void dfs(int source)
{
    printf("%d",source+1);
    visited[source]=1;
    for(int i=0;i<v;i++)
    {
        if(a[source][i]==1 && visited[i]==0)
        {
            dfs(i);
        }
    }
}
void bfs(int source)
{   int front=-1,rear=-1,i,v2;
    int q[100];
    visited[source]=1;
    q[++rear]=source;
    while(front<rear)
    {
        v2=q[++front];
        printf("%d ",v2+1);
        
        for(i=0;i<v;i++)
        {
            if(a[v2][i]==1 && visited[i]==0)
            {
                q[++rear]=i;
                visited[i]=1;
            }
        }
    }
}
int main()
{   
    printf("enter the vertices:");
    scanf("%d",&v);
    printf("ENTER the edges");
    scanf("%d",&e);
    
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=0;i<e;i++)
    {
        printf("enter the vertices v1,v2:");
        scanf("%d %d",&v1,&v2);
        a[v1-1][v2-1]=1;
    }
    
    int source;
    printf("enter the source:");
    scanf("%d",&source);
    bfs(source-1);
    return 0;
}


// output

// enter the vertices:4
// ENTER the edges6
// enter the vertices v1,v2:1
// 1
// enter the vertices v1,v2:1
// 2
// enter the vertices v1,v2:1
// 3
// enter the vertices v1,v2:1
// 4
// enter the vertices v1,v2:2
// 4
// enter the vertices v1,v2:3
// 4
// enter the source:1
// 1 2 3 4 