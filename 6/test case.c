#include<stdio.h>
int main()
{
    int i,n,a,sum,T;
    scanf("%d",&T);
    while(T--){
     (scanf("%d",&n))
            sum=0;
            for(i=1;i<=n;i++){
                scanf("%d",&a);
                sum+=a;
            }
            printf("%d",sum);
        }
        printf("\n");
    return 0;
}
