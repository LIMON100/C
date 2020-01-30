#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000],s2[1000];
    int i=0,j=0;
    gets(s1);
    gets(s2);
    while(s1[i]!='\0')
    {
        if (s1[i]==s2[j] && s2[j]!='\0' && s1[i]!=' ')
        {
            j++;
            i++;
        }
        else
            j=0;
        i++;

    }
    if(j==strlen(s2))
    {
        printf("succcees\n");
    }
    else
    {
        printf("unsucess\n");
    }
    return 0;
}
