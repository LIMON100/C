#include<stdio.h>
int main()
{
    FILE *fp;
    int n,i;
    fp=fopen("limon.txt","w");
    for(i=1;i<=20;i++)
    {
      putw(i,fp);
    }
    fclose(fp);
    fp=fopen("limon.txt","r");
    while((n=getw(fp))!=EOF)
          {
              printf("%d",n);
          }
            fclose(fp);
    return 0;

}
