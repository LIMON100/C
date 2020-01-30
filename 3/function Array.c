#include<stdio.h>
int find_min(int ara[],int n);
int main()
{
    int ara[]= {-100,34,7,45,0,22,-195,566,4,56,-45};
    int n=11;
    int min=find_min(ara,n);
    printf("%d\n",min);
    return 0;
}
int find_min(int ara[],int n)
{
    int min=ara[0];
    int i;
    for(i=1;i<n;i++){
      if(ara[i]<min){
       min=ara[i];
      }
    }
    return min;
}
