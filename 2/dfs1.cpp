#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
#define INF 10000

int pre[1000];
int dist[1000];
int visited[1000];
int adj[100][100];
int dt[100];
int ft[100];
int t=0;
int color[100];
int white=100,grey=101,black=102;
int nodes;

void dfs_visit(int source,int visited[])
{
    visited[source] =1;
    color[source]=grey;
    t++;
    dt[source]=t;

    for(int i=0; i<nodes; i++)
    {
        if(adj[source][i]==1)
        {
            if (visited[i]==0)
            {
                printf("Tree edges is:(%d %d)\n",source,i);
                pre[i]=source;
                dfs_visit(i,visited);
            }

            else
            {
               if(color[i]==grey)
                {
                    printf("The back edges are:(%d %d)\n",source,i);
                }

                else if(color[i]==black && dt[source]<dt[i])
                {
                    printf("The forward edges are:(%d %d)\n",source,i);
                }

                else if(color[i]==black && dt[source]>dt[i])
                {
                    printf("The cross edges are:(%d %d)\n",source,i);
                }
            }
        }
    }

    color[source]=black;
     t++;
     ft[source]=t;
}

void dfs(int source,int nodes)
{
    for(int i=0; i<nodes; i++)
    {
        visited[i]=0;
        color[i]=white;
        ft[i]=INF;
        dt[i]=INF;
        pre[i]=-1;
    }

    dfs_visit(source,visited);
}

int main()
{
    int edges,n,e,i;
    printf("Enter no of nodes & edges: ");
    scanf("%d%d",&nodes,&edges);

    for(i=0; i<edges; i++)
    {
        scanf("%d%d",&n,&e);
        adj[n][e]=1;
    }

    printf("Enter source vertex: ");
    int source;
    scanf("%d",&source);

    dfs(source,nodes);

    return 0;
}

