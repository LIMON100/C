#include<stdio.h>
int main()
{
    int n,i,j,flag;
    int (i+2)=5;
    for(j=2;j<(i+2);j++)
    {
        if((i+2)%j==0)
        {
            flag=1;
        }
    }
    if(flag==0)
        printf("prime numbre .");
    else
        printf("Not prime.");
    return 0;
}
