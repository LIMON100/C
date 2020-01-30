#include<stdio.h>
int main()
{
    char s[15],s1[15];
    int i=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    s[i]=s1[i];
    s[i]=s1[i];
    printf("%s",s1);
    return 0;
}
