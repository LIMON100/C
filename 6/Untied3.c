#include<stdio.h>
int main()
{
    char str[200];
    int i=0,count=0,l;
    gets(str);
    l=strlen(str);
    for(i=0;i<=l;i++){
        if(str[i]!=' ' && str[i]!='.'){
            count++;
            while(str[i]!=' ')
             i++;
         }

        }
    printf("%d\n",count);
    return 0;
}


