#include<stdio.h>
#include<stdlib.h>
int main()
{
        int *ptr,i,*p,sum=0,n;
        scanf("%d",&n);
        ptr=(int *)malloc(sizeof(int )* n);
        p=ptr;
        printf("enter array elements :\n");
        for(i=0; i<n; i++)
        {
            scanf("%d",ptr);
            sum=sum+ptr;
            ptr++;
        }
        printf("array elements :");
        for(i=0; i<n; i++)
        {
            printf("%d\n",*p);
            p++;
        }
        printf("%d",sum);
    return 0;
}
