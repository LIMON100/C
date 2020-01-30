#include<stdio.h>
#include<math.h>
int main()
{
    int T,n,i;
    double difference;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&n);
       double sq_root=srqt(n);
      difference = ceil(sq_root)-floor(sqrt);

      if(difference < 0.000001)
      {
          printf("YES\N");
      }
      else
      {
          printf("NO\n");
      }
    }
    return 0;
}
