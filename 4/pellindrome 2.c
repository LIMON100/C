#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp,rev[100];
    int begin,end;
    printf("enter string:");
    scanf("%s",&str);
    strcpy(rev,str);
    begin=0;
    end=strlen(str)-1;
    while(begin<end){
        temp=str[begin];
        str[begin]=str[end];
        str[end]=temp;
        begin++;
        end--;
    }
    printf("reverse string:%s\n",str);
    if(strcmp(rev,str)==0){
        printf("%s is pallindrome\n",str);
    }
    else{
        printf("%s is not pallindrome\n",str);
    }
    return 0;
}
