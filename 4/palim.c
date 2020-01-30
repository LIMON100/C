#include<stdio.h>
int main()
{
    int i,j,r=0,sum,n;
    scanf("%d",&n);
    sum=n;
    while(sum!=0)
    {
        r=r*10;
        r=r+sum%10;
        sum=sum/10;
    }
    if(n==r)
        printf("%d is palindrome\n :",n);
    else
        printf("%d is not palindrom\n:",n);
    return 0;
}
