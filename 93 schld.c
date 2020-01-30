#include<stdio.h>
int main()
{
    int total,i,j;
    total=0;
    do{
        printf("enter next number (0 to exits) :");
        scanf("%d",&i);
        printf("enter number again :");
        scanf("%d",&j);
        if(i=j){
            printf("mismatch");
            continue;
        }
        total=total+i;
    }
    while(i);
    printf("total is %d\n",total);
    return 0;
}
