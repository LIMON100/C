#include<stdio.h>
int main()
{
    int i,n,ans;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0)
            printf("%d is not prime",n);
        else
            ("%d  prime",n);
    }
    return 0;
}
