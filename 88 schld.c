#include<stdio.h>
int main()
{
    int i,j,k;
     for(i=0;i<3;i++)
        for(j=0;j<26;j++)
         for(k=0;k<1;k++)
         printf("%c\n",'A'+j);
    return 0;
}
