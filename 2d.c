#include<stdio.h>
int main()
{
    int a[1][3],i,j,sum=0,sum1=0,sum2;

    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter people of sector %d House %d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("Number of People of sector 1 is :%d",sum);
    printf("\n");

    for(i=0;i<1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter people of sector %d House %d: ",i+2,j+1);
            scanf("%d",&a[i][j]);
            sum1=sum1+a[i][j];
        }
    }
    printf("Number of People of sector 2 is :%d",sum1);
     printf("\n");

    sum2=sum1+sum;

    printf("Total number of people in all sector is: %d",sum2);
    return 0;
}
