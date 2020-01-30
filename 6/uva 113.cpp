#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,p;
    double s;

      while(scanf("%lf%lf",&n,&p)!=EOF)
          {
              s=pow(p,1/n);
              printf("%f\n",s);
          }
    return 0;
}
