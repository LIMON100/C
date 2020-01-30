#include<stdio.h>
int main()
{
    FILE *fp;
    int n,i;
    fp=fopen("number.txt","w");
    for(i=1;i<=5;i++)
    {
        putw(i,fp);
    }
    fclose(fp);

    fp=fopen("number.txt","r");
    while((n=getw(fp))!=EOF)
    {
       printf("%d ",n);
    }
    fclose(fp);
    return 0;
}
