#include<stdio.h>
int main()
{
    int i,j,n,k,chack;
    while(scanf("%d",&n)!=EOF){
        if(n==0 || n<2){
            break;
        }
        for(i=2;i<=n/2;i++){
            if(n%i==0)
                chack=0;
        else
            chack=1;
        }
        if(chack==1)
            printf("%d is prime",n);
        else
            printf("%d not prime",n);
    }
    return 0;
}
