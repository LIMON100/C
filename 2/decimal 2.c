#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num=0,i=0;
    int rem;
    while(n>0){
        rem=n%2;
        num=num+rem*pow(10,i);
        i++;
        n=n/2;
    }
    printf("binary number is %d",num);
    return 0;
}
