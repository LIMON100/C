#include<stdio.h>
int main()
{
    int i,j,n,a,ck;
    scanf("%d",&n);
    ck=1;
    for(i=2;i<n;i++){
     if(n==0 || n<2)
        break;
     if(n%i==0 || (n*10)%i==0)
        ck=0;
    }
    if(ck==1)
        printf("%d prime",n);
    else
        printf("%d not prime",n);
    return 0;
}
