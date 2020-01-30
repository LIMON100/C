#include<stdio.h>
int main()
{
    char str[200];
    int i,count=0,l;
    //l=strlen(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' ' && str[i]!='\t'){
            count++;
            while(str[i]!=' ' && str[i]!='\t')
                i++;
        }
    }
    printf("%d\n",count);
    return 0;
}
