#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char command[80],temp[80];
    int i,j;
    for(; ;){
        printf("opeation :");
        gets(command);
        if(!strcmp(command,"quit"))
        break;
        printf("enter first number :");
        gets(temp);
        i=atoi(temp);
        printf("enter second number :");
        gets(temp);
        j=atoi(temp);
        if(!strcmp(command,"add"))
        printf("%d\n",i+j);
        else if(!strcmp(command,"substract"))
        printf("%d\n",i-j);\
        else if(!strcmp(command,"divide")){
            if(j)
                printf("%d\n",i/j);
        }
        else if(!strcmp(command,"multiply"))
            printf("%d\n",i*j);
        else
            printf("unknown command. \n");
    }
    return 0;
}
