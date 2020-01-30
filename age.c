#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age<18){
     printf("you can not vote\n");
    }
    else{
    printf("you can vote\n");
    }
    return 0;
}
