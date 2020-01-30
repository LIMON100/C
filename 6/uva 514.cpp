#include<bits/stdc++.h>
using namespace std;
stack<int>s;
int n,n1;
void train()
{
      while(1)
        {
            while(s.size() > 0) s.pop();
            int j=0;
            for(int i=0; i<n; i++)
            {
                scanf("%d",&n1);
                if(n1==0)
                    return;

                while(j<n && j!=n1)
                {
                    if(s.size()>0 && s.top()==n1)
                    break;
                    j++;
                    s.push(j);
                }
                if(s.top()==n1)
                    s.pop();
            }

            if(s.size()==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
}


int main()
{
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
            train();
        printf("\n");
    }

    return 0;
}
