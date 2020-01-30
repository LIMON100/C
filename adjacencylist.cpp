#include<iostream>
#include<vector>
#include<utility>
#include<list>
#include<iterator>
#include<cstdio>
using namespace std;

int main()
{
    int vertices, edges, v1, v2, weight;

    printf("Enter the Number of Vertices -\n");
    scanf("%d", &vertices);

    printf("Enter the Number of Edges -\n");
    scanf("%d", &edges);

    vector<list<pair<int,int> > >v(edges);
     printf("Enter the Edges V1 to V2, with weight W\n");
     for(int i=1; i<=edges; i++)
     {
         cin>>v1>>v2>>weight;
         v[v1].push_back(make_pair(v2,weight));
     }

     ///vector<list<pair<int,int> > >::iterator it;

     cout<<"Print the adjacency list:"<<endl;
     for(int it=1; it<=vertices; it++)
     {
         printf("The neighbour of the weighted nodes from this nodes are: v[%d]\n",it);

         list<pair<int,int> >::iterator li;
         for(li=v[it].begin(); li!=v[it].end(); li++)
         {
             ///printf(" %d(%d)",(*li).first,(*li).second);
              cout<<"Node= "<<li->first<<" "<<"with weight= "<<li->second<<endl;

         }
         printf("\n");
     }


    return 0;
}
