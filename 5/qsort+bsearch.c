#include<stdio.h>
#include<stdlib.h>
int comparefunc(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
   int i,key,*item,n=5;
   int values[]={65,6,100,1,250};

   qsort(values,5,sizeof(int),comparefunc);
   for(i=0;i<n;i++)
   {
       printf("%d ",values[i]);
   }
   printf("\n");

      while(1)
    {
        printf("enter the values u want (0 to exisat):");
        scanf("%d",&key);
        if(key==0)
        {
            break;
        }
        item=(int *)bsearch(&key,values,n,sizeof(int),comparefunc);
        if(item!=NULL)
        {
            printf("item is found :%d\n",*item);
        }
        else
            printf("not found in array\n");
    }
   return 0;
}
