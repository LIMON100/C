#include<stdio.h>
int main()
{
    int serverUsers[5][2]={1,14,2,28,3,19,4,8,5,15};
    int server,i;
    printf("enter the server number :");
    scanf("%d",&server);
    for(i=0;i<5;i++)
        if(server==serverUsers[i][0]){
            printf("there are %d users on server %d.\n",serverUsers[i][1],server);
        break;
        }
        if(i==5)
            printf("server not listed.\n");
        return 0;
}
