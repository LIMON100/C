#include<stdio.h>
///#include<queue>
#define INF 10000
int pre[1000];
int dist[1000];
int visited[1000];
int adj[100][100];
int white=100,grey=101;
int q[50];

void bfs(int source)
{
    visited[source]=1;
    dist[source]=0;
}

int main()
{
    int nodes,edges,n,e,i;
    printf("Enter no of nodes & edges: ");
    scanf("%d%d",&nodes,&edges);

    for(i=0; i<edges; i++)
    {
        scanf("%d%d",&n,&e);
        adj[n][e]=white;
    }

    for(i=0; i<nodes; i++)
    {
        visited[i]=1;
        dist[i]=INF;
        pre[i]=-1;
    }

    printf("Enter source vertex: ");
    int source;
    scanf("%d",&source);

    bfs(source);

    return 0;
}
