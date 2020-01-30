#include<stdio.h>
#include<string.h>
int main()
{
    char s1[80],s2[80];
    int i,T,j,l1,l2,count;
    scanf("%d",&T);
    while(T--)
    {
    scanf(" %[^\n]",s1);
    scanf(" %[^\n]",s2);
    l1=strlen(s1);
    l2=strlen(s2);
     count=0;
    for(i=0; i<=(l1-l2); i++)
    {
        if(s2[0]==s1[i])
        {
            for(j=1; j<l2; j++)
            {
                if(s2[j]!=s1[i+j])
                    break;
            }
            if(j==l2)
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
 }
 return 0;
}

