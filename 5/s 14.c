#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int count=0,i,n,l;
    l=strlen(str);
    for(i=0;i<=l;i++){
            if(str[i]!=' '){
                if(str[i]!='.')
                    count++;
                    while(str[i]!=' ')
                        i++;
            }
    }

    printf("%d",count);
    return 0;
}
