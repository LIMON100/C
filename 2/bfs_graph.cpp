#include<iostream>
#include<list>
using namespace std;

class graph
{
	int v;
	list<int>*adj;
	
	public:
		graph(int v);
		
		void addedge(int a,int b);
		
		void bfs(int a);
};

graph::graph(int v)
{
	this->v=v;
	adj= new list<int > [v];
}

void graph::addedge(int a,int b)
{
	adj[a].push_back(b);
}

void graph::bfs(int s)
{
	list<int>q;
	
	bool *visited=new bool[v];
	for(int i=1;i<=v;i++)
	{
		visited[i]=false;
	}
	
	list<int>::iterator it;
	visited[s]=true;
	q.push_back(s);
	
	while(!q.empty())
	{
		s=q.front();
		cout<<s<<" ";
	    q.pop_front();
	    
	    for(it=adj[s].begin(); it!=adj[s].end(); it++)
	    {
	    	if(!visited[*it])
	    	{
	    		visited[*it]=true;
	    		q.push_back(*it);
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
