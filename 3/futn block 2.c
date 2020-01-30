#include<stdio.h>
int main()
{
    int n=10;
    printf("in scope level 1:n=%d\n",n);
    {
        n++;
        printf("in scope level 2:n (n++)=%d\n",n);
       {
           int n=1;
           printf("\n in scope level 3:n=%d\n",n);
           n++;
           printf("in scope level 3:n (n++)%d\n\n",n);
       }
       printf("in scope level 2:n=%d\n",n);
    }
    printf("in scope level 1:n (n++)%d\n",n);
    return 0;
}
