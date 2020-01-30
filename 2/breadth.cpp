#include<bits/stdc++.h>
using namespace std;
#define INF 1000
int nodes;
int pre[100];

class Graph
{
    int v;
    list<int>*adj;
public:
    Graph(int v);
    void addEdge(int a,int b);
    void BFS(int source);
};

Graph::Graph(int v)
{
    this->v=v;
    adj=new list<int>[v];
}

void Graph::addEdge(int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void Graph::BFS(int source)
{
    bool *visited=new bool[v];
    vector<int>dist(v,INF);

    for(int i=0; i<v; i++)
    {
        visited[i]=false;
    }

    list<int>q;
    q.push_back(source);
    pre[source]=-1;
    visited[source]=true;
    dist[source]=0;
    list<int>::iterator it;

    while(!q.empty())
    {
        int s=q.front();
        q.pop_front();
        for(it=adj[s].begin(); it!=adj[s].end(); it++)
        {
            if(!visited[*it])
            {
                visited[*it]=true;
                dist[*it]=dist[s]+1;
                pre[*it]=s;
                q.push_back(*it);
            }
        }
    }
}

void printpath(Graph g,int s,int e)
{
    if(e==s)
    {
        cout<<e<<" ";
    }
    else if(pre[e]==-1)
    {
        printf("No path\n");
    }
    else
    {
        printpath(g,s,pre[e]);
        cout<<e<<" ";
    }
}

int main()
{
    int u,v,source,s1,d1,edges;
    printf("Enter no of nodes: ");
    cin>>nodes;
    printf("Enter no of edges: ");
    cin>>edges;
    Graph g(nodes);
    printf("Enter edges:\n");
    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        g.addEdge(u,v);
    }
    printf("Enter source vertex: ");
    cin>>source;
    g.BFS(source);
    printf("Enter Source and destination vertex: ");
    cin>>s1>>d1;
    printpath(g,s1,d1);

    return 0;
}
