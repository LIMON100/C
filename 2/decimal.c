#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,r,decimal,binary[20];
    printf("enter a decimal number :");
    scanf("%d",&decimal);
    int n=decimal;
    i=0;
    while(decimal>0){
        r=decimal%2;
        binary[i]=r;
        decimal=decimal/2;
        i++;
    }
    printf("binary equivalant of %d is ",n);
    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    return 0;
}
