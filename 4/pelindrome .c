#include<stdio.h>
#include<string.h>
int main()
{
    char one [34],two[32];
    int cmp;
    printf("enter our string :");
    scanf("%s",one);
    strcpy(two,one);
    strrev(one);
    cmp=strcmp(one,two);
    if(cmp==0)
        printf("enter string is pelindrome ");
    else
        printf("enter string is not pelindrome .");
    return 0;
}
