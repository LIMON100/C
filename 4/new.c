#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **ara,num[12];
    int i,j,total_classes,n;
    printf("enter the total number of classes :");
     scanf("%d",&total_classes);
      ara=(int**)malloc(sizeof(int *)*total_classes);
       if(ara==NULL){
        printf("failed.");
        return 1;
      }
      for(i=0;i<total_classes;i++)
      {
          printf("enter the number of students for class %d :",i+1);
          scanf("%d",&n);
          num[i]=n;
          ara[i]=(int *)malloc(sizeof(int )*n);
          if(ara[i]==NULL)
          {
              printf("failed");
              return 1;
          }
          for(j=0; j<n; j++)
          {
              printf("enter the marks of a students %d:",j+1);
              scanf("%d",&ara[i][j]);
          }
      }
      printf("output.\n");
      for(i=0; i<total_classes; i++)
      {
          printf("classes %d:",i+1);
          for(j=0; j<num[i]; j++){
            printf("%4d",ara[i][j]);
          }
          printf("\n");
      }
      return 0;
}