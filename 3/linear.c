#include<stdio.h>
int main()
{
    int array[100],i,j,n,ck,key;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++)
          scanf("%d",&array[i]);
    scanf("%d",&key);
     for(i=0;i<n;i++){
        if(array[i]==key)
            break;
     }
     if(i==n)
        printf("no");
     else
        printf("%d\n",i+1);
  }
    return 0;
}
