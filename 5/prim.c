#include<stdio.h>
int main()
{
    int i,n,ck;
    printf("the element is");
    scanf("%d",&n);
    for(i=2;i<n/2;i++){
      if(n%i==0)
       ck=0;
       else
        ck=1;
  }
    if(ck==1)
        printf("%d is prime",n);
        else
            printf("not prime");
        return 0;
}
