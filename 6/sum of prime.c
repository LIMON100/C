#include<stdio.h>
int prime(int n)
{
    int i,flag=1;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            flag=0;
    }
    return flag;
}

int main()
{
    int i,flag,n;
    printf("enter a integer number :");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++){
        if(prime(i)==1)
        {
            if(prime(n-i)==1){
                printf("%d=%d+%d\n",n,i,n-i);
            flag=1;
        }
    }
  }
    if(flag==0)
        printf("%d cannot be expressed",n);
    return 0;
}
