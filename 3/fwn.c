#include<stdio.h>
int main()
{
    int arry[100]={1,2,3,4,5};
    int arry2[100]={10,12,14,20,69};
    int i,j,n;
    int count=0,temp;
    for(i=0;arry[i]!='\0';i++)
    {
        count++;
    }
    for(j=0;arry2[j]!='\0';j++)
    {
        arry[count]=arry2[j];
        count++;
    }

    arry[count]='\0';

     for(i=0;i<count;i++)
     {
         for(j=i+1;j<count;j++)
         {
             if(arry[i]>arry[j])
             {
                 temp=arry[i];
                 arry[i]=arry[j];
                 arry[j]=temp;
             }
         }
     }
     for(i=0;i<count;i++)
     {
         printf("%d ",arry[i]);
     }
     return 0;
}
