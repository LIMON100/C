#include<stdio.h>
int main()
{
    int a;
    int i=1;
    while(i<=5)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        printf("%d\n",a);
        i++;
    }
    return 0;
}
