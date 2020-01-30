#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20][100];
    int i,j,l,l1,l2,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %[^\n]",s1[i]);
    }

    for(i=0; i<n; i++)
    {
        //l=strlen(s1[i]);
        for(j=0; j<1; j++)
        {
            if(s1[i][j]>='a' && s1[i][j]<='z')
            {
                printf("%d\n",s1[i][j]-97);
            }
        }
    }

    return 0;
}
