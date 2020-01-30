#include<stdio.h>
#include<string.h>
int s=0;
int z=0;
int x=0;
int main()
{
    char s1[50],s2[50],s3[50],s4[50];
    char ch;
    char new_s[50];
    char new_s2[50];
    int i,j,k,l;
    printf("Enter string :");
    scanf(" [^\n]",s1);
    for(i=0; i<strlen(s1); i++)
    {
        ch=s1[i];
        if(ch>='a' && ch<='z')
        {
            s2[s]=ch;
            s++;
        }
    }
    for(j=0; j<strlen(s2); j++)
    {
        for(k=1; k<strlen(s2); k++)
        {
            if(s2[j]!=s2[k])
            {
                new_s[z]=s2[j];
                z++;
            }
            else
            {
                new_s2[x]=s2[k];
            }
        }
    }
    printf("%s\n%s ",new_s,new_s2);
    return 0;
}
