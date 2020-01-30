#include<iostream>
#include<list>
using namespace std;

class graph
{
    int V;
    list<int>*adj;

public:
    graph(int V);
    void addedge(int v,int w);
    void bfs(int p);
};

graph::graph(int V)
{
    this->V=V;
    adj=new list<int>[V];
}

void graph::addedge(int v,int w)
{
    adj[v].push_back(w);
}

void graph::bfs(int p)
{
    list<int>q;
    bool *visited=new bool[V];

    for(int i=1; i<=V; i++)
    {
        visited[i]=false;
    }

    visited[p]=true;
    q.push_back(p);
    list<int>::iterator i;

    while(!q.empty())
    {
        p=q.front();
       cout<<p<<" ";
        q.pop_front();
        for(i=adj[p].begin(); i!=adj[p].end(); i++)
        {
            if(!visited[*i])
            {
                visited[*i]+=true;
                q.push_back(*i);
            }
        }
    }
}

int main()
{
    graph g(14);
    g.addedge(1,2);
    g.addedge(1,11);
    g.addedge(2,3);
    g.addedge(3,4);
    g.addedge(11,12);
    g.addedge(4,5);
    g.addedge(5,6);
    g.addedge(6,7);
    g.addedge(7,8);
    g.addedge(8,9);
    g.addedge(9,10);
    g.addedge(10,11);
    ///g.addedge(11,10);
    g.addedge(13,14);
    cout<<"The shortest path is: ";
    g.bfs(1);

    return 0;
}
