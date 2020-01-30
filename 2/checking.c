#include<stdio.h>
#include<string.h>
int main()
{
    int i,a[5];
    char ch;
    for(i=1;i<=5;i++)
       scanf("%d",&a[i]);
           if(isdigit(a[i]))
            {
               printf("right\n :");
            }
            else
            {
                printf("wrong\n");
            }
       return 0;
}
