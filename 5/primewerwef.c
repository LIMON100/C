#include<stdio.h>
int main()
{
    int i,n,j,ck;
    while(scanf("%d",&n)!=EOF){
        if(n<2)
            return 0;
        if(n==0)
            break;
        for(i=2;i<=n;i++){
            ck==1;
            if(n%i==0)
                ck=0;
        else
            ck=1;
        }
        if(ck==1)
           printf("%d the number is  prime",n);
        else
           printf("%d not prime",n);
    }
    return 0;
}
