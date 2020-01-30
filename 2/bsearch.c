#include<stdio.h>
#include<stdlib.h>

int comparefunc(const void *a,const void *b)
 {
    return (*(int*)a-*(int*)b);
 }

int main()
{
    int key,*item,i,n=5;
    char values[5]="bangl";

    while(1)
    {
        printf("enter the values u want (0 to exisat):");
        scanf("%c",&key);
        if(key==0)
        {
            break;
        }
        item=(int *)bsearch(&key,values,5,sizeof(int),comparefunc);
        if(item!=NULL)
        {
            printf("item is found :%d\n",*item);
        }
        else
            printf("not found in array\n");
    }
    return 0;
}
