#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<4)
    {
        j=0;
        while(j<3)
        {
            printf("%d\n",i*j);
            j++;
        }
        i++;
    }
    return 0;
}
