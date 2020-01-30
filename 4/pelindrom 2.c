#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l;
    char str[30]="madam",rev[30];
    //scanf("%s",str);
    //l=strlen(str);
    for(i=4,j=0;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    printf("%s\n",rev);
    return 0;
}
