#include<stdio.h>
int main()
{
    int i=1,j;
    while(i<6)
    {
        j=i;
        while(j<6)
        {
            printf("*");
            j++;
        }
         printf("\n");
        i++;
    }
    return 0;
}
