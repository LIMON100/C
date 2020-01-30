#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
#define INF 10000

int pre[1000];
int dist[1000];
int visited[1000];
int adj[100][100];
///int white=100,grey=101;

int bfs(int source,int v)
{
    queue<int>q;
    visited[source]=1;
    dist[source]=0;
    q.push(source);
    pre[source]=-1;

    while(!q.empty())
    {
        int s=q.front();
        cout<<s<<" ";
        q.pop();

        for(int i=0; i<v; i++)
        {
            if(adj[s][i]==1)
            {
                if(visited[i]==0)
                {
                    visited[i]=1;
                    dist[i]=dist[s]+1;
                    pre[i]=s;
                    q.push(i);
                }
            }
        }
    }
}

void printpath(int adj[][100],int s,int e)
{
    if(e==s)
    {
        cout<<s<<" ";
    }

    else if(pre[e]==-1)
    {
        cout<<"No path"<<endl;
    }
    else
    {
        printpath(adj,s,pre[e]);
        cout<<e<<" ";
    }
}


int main()
{
    int nodes,edges,n,e,i;
    printf("Enter no of nodes & edges: ");
    scanf("%d%d",&nodes,&edges);

    for(i=0; i<edges; i++)
    {
        scanf("%d%d",&n,&e);
        adj[n][e]=1;
    }

    for(i=0; i<nodes; i++)
    {
        visited[i]=0;
        dist[i]=INF;
    }

    printf("Enter source vertex: ");
    int source;
    scanf("%d",&source);

    bfs(source,nodes);

    printf("\nEnter source and destination vertex: ");
    int s1,d1;
    cin>>s1>>d1;
    printpath(adj,s1,d1);

    return 0;
}

