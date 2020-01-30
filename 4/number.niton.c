#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number>600){
     printf("passed in 1st division\n");
    }
    if(number>=450 && number<=599){
     printf("passed in second division\n");
    }
    else if("number>=330 && number<=449"){
     printf("passed in third division\n");
    }
    if(number<=330){
     printf("sorry,failed\n");
    }
    return 0;
}

