#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,p;
     printf("For Matrix A \n");
     printf("\nEnter Number Of Rows :: ");
     scanf("%d",&r1);
     printf("\nEnter Number Of Columns :: ");
     scanf("%d",&c1);
     printf("\nFor Matrix B\n");
     printf("\nEnter Number Of Rows :: ");
     scanf("%d",&r2);
     printf("\nEnter Number Of Columns :: ");
     scanf("%d",&c2);
    do
      {
        if (r1 != r2)
      {
       printf("ERROR: Matrix size mismatch - %dx%d and %dx%d\n", r1,c1,r2,c2);
       printf("\nEnter number of Rows :: ");
       scanf("%d",&r2);
     }
    else if(c1!=c2)
    {
        printf("ERROR: Matrix size mismatch - %dx%d and %dx%d\n", r1,c1,r2,c2);
       printf("\nEnter number of Columns :: ");
       scanf("%d",&c2);
        continue;
    }
  }
  while(r1==r2 && c1==c2);
  p=r1+r2;
  printf("%d",p);
    return 0;
}
