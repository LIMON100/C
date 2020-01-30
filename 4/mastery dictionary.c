#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    int i,j;
    printf("enter message :");
    gets(str);
    i=0;j=strlen(str)-1;
    while(i<=j){
        if(i<j)
            printf("%c%c",str[i],str[j]);
        else
            printf("%c",str[i]);
            i++;j--;
    }
    return 0;
}
