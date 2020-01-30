#include<iostream>
#include<cstdio>
#include<map>
#include<vector>

using namespace std;
class disjoint
{
   map<int,int>parent;
   public:

       void makeset(vector<int>const &v)
       {
           for(int i: v)
           {
               parent[i]=i;
           }
       }

       int find(int x)
       {
           if(parent[x]==x)
           {
               return x;
           }

           return find(parent[x]);
       }

       void Union(int a,int b)
       {
           int x=find(a);
           int y=find(b);

           parent[a]=b;
       }
};

void printset(vector<int>const &v,disjoint &d)
{
       for(int i: v)
           {
               cout<<d.find(i)<<" ";
           }
           printf("\n");
}

int main()
{
    vector<int>v={1,2,3,4,5};

    disjoint d;

    d.makeset(v);
    printset(v,d);

    d.Union(4,3);
    printset(v,d);

    d.Union(2,1);
    printset(v,d);

    d.Union(1,3);
    printset(v,d);

    return 0;
}

