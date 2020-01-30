#include<stdio.h>

int input();
int print();
int matrixadd(int i,int j);
int a[10][10],b[10][10],c[10][10];
int r1,c1,r2,i,j,c2;

int main()
{
    input();
    return 0;
}

int input()
{
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
     if ((r1 != r2) || (c1 != c2))
    {
       printf("ERROR: Matrix size mismatch - %dx%d and %dx%d\n", r1,c1,r2,c2);
       return 0;
    }
     printf("\n\nFOR MATRIX A :: \n");
     for(i=0;i<r1;i++)
     {
        for(j=0;j<c1;j++)
            {
                printf("Enter Element [%d][%d]:",i,j);
                scanf("%d",&a[i][j]);

            }
     }
     printf("\n\nFOR MATRIX B :: \n");
     for(i=0;i<r2;i++)
     {
        for(j=0;j<c2;j++)
          {
              printf("Enter Element [%d][%d]:",i,j);
              scanf("%d",&b[i][j]);
          }
     }
     print();
     matrixadd(i,j);
}

int print()
{
    //int i,j;
    printf("\n\tMATRIX A :: \n");
     for(i=0;i<r1;i++)
     {
        printf("\t");
         for(j=0;j<c1;j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
     }
     printf("\n\tMATRIX B :: \n");
     for(i=0;i<r2;i++)
     {
         printf("\t");
            for(j=0;j<c2;j++)
                {
                  printf("%d  ",b[i][j]);
                }
            printf("\n");
     }
}

int matrixadd(int i,int j)
{

     printf("Addition of matrix A+B is:\n");
     for(i=0; i<r1; i++)
     {
         for(j=0; j<c1; j++)
         {
             c[i][j]=a[i][j]+b[i][j];
             printf("%d\t",c[i][j]);
         }
         printf("\n");
     }
     return 0;
}
