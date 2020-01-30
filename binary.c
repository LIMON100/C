#include<stdio.h>
int main()
{
   int a[20],i,se,n;
   scanf("%d",&n);

   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Enter search item: ");
   scanf("%d",&se);
   int s=1,e=n,c=0;
   while(s<=e)
   {
       int mid=(s+e)/2;

       if(a[mid]==se)
       {
           ///printf("Item found.\n");
           c++;
           break;
       }

       else if(a[mid]>se)
       {
           e=mid-1;
       }
       else
       {
           s=mid+1;
       }
   }

   if(c==1)
   {
       printf("Item found.\n");
   }
   else
   {
       printf("Item not found.\n");
   }
   return 0;
}
