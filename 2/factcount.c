#include<stdio.h>
#include<string.h>
int main()
{
    int i,T,count=1,str=0,l,j,multi=1,p;
    char s[100];
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==' ')
           {
               count++;
           }
    }

    for(i=2; i<=count; i++)
    {
        multi=multi*i;
    }
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        for(j=i; j<=l; j++)
        {
            if(strcmp(s[i],s[j]==0))
               str++;

        }
    }
    printf("%d\n",str);

    return 0;
}
