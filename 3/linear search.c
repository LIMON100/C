#include<stdio.h>
int main()
{
   int arr[100],i,n,key,loc,ck;
   while(scanf("%d",&n)!=EOF){
   for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
   scanf("%d",&key);
   ck=0;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            ck=1;
            loc=i+1;
        }
    }
        if(ck==1)
            printf("case 1 : %d\n",loc);
        else
            printf("case 2 : no");
   }
    return 0;
}
