#include<stdio.h>
#include<math.h>
int power(int ,int);
int main()
{
    int r,n,temp,sum=0,count=0,i;
    printf("enter digits value:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+pow(r,count);
        temp=temp/10;
    }
    if(n==sum)
        printf("%d is an armstrong number :",n);
    else
        printf("%d is not an armstrong number :",n);
    return 0;
}
/*int power(int n, int r) {
   int c, p = 1;

   for (c = 1; c <= r; c++)
      p = p*n;

   return p;
}*/
