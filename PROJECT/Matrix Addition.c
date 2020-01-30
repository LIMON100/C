#include<stdio.h>
int a[10][10],b[10][10],c[10][10],d[10][10];
int r1,c1,r2,i,j,c2,r3,c3,row,col;
char intt[1];
int main()
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
     printf("\nFor Matrix C\n");
     printf("\nEnter Number Of Rows :: ");
     scanf("%d",&r3);
     printf("\nEnter Number Of Columns :: ");
     scanf("%d",&c3);
    if (r1 != r2)
      {
       printf("ERROR: Matrix size mismatch - %dx%d and %dx%d\n", r1,c1,r2,c2);
       printf("Enter equal number of 2nd=1st rows or matrix addition will not work ::\n");
       printf("\nEnter number of Rows :: ");
       scanf("%d",&r2);
     }
    if (c1!=c2)
    {
        printf("ERROR: Matrix size mismatch - %dx%d and %dx%d\n", r1,c1,r2,c2);
         printf("Enter equal number of 2nd=1st columns or matrix addition will not work ::\n");
       printf("\nEnter number of Columns :: ");
       scanf("%d",&c2);
    }

        if (r1 != r3)
      {
       printf("ERROR: Matrix size mismatch - %dx%d and %dx%d\n", r1,c1,r3,c3);
       printf("Enter equal number of 3rd=1st rows or matrix addition will not work ::\n");
       printf("\nEnter number of Rows :: ");
       scanf("%d",&r3);
     }
    if (c1!=c3)
    {
        printf("ERROR: Matrix size mismatch - %dx%d and %dx%d\n", r1,c1,r3,c3);
         printf("Enter equal number of 3rd=1st columns or matrix addition will not work ::\n");
       printf("\nEnter number of Columns :: ");
       scanf("%d",&c3);
    }

      getchar();
     printf("\n\nFOR MATRIX A :: \n");
     for(i=0;i<r1;i++)
     {
        for(j=0;j<c1;j++)
            {
                printf("Enter Element a[%d][%d]:",i,j);

                 gets(intt);
                 if(isdigit(intt[0]))
                 {
                     a[i][j]=atoi(intt);
                 }
                 else{
                    printf("Enter valid number: \n");
                    j--;
                 }

            }
     }

     printf("\n\nFOR MATRIX B :: \n");
       for(i=0;i<r1;i++)
     {
        for(j=0;j<c1;j++)
            {
                printf("Enter Element b[%d][%d]:",i,j);

                 gets(intt);
                 if(isdigit(intt[0]))
                 {
                     b[i][j]=atoi(intt);
                 }
                 else{
                    printf("Enter valid number: \n");
                    j--;
                 }

            }
     }

         printf("\n\nFOR MATRIX C :: \n");
     for(i=0;i<r1;i++)
     {
        for(j=0;j<c1;j++)
            {
                printf("Enter Element c[%d][%d]:",i,j);

                 gets(intt);
                 if(isdigit(intt[0]))
                 {
                     c[i][j]=atoi(intt);
                 }
                 else{
                    printf("Enter valid number: \n");
                    j--;
                 }

            }
     }

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
        printf("\n\tMATRIX C :: \n");
     for(i=0;i<r1;i++)
     {
        printf("\t");
         for(j=0;j<c1;j++)
            {
                printf("%d  ",c[i][j]);
            }
            printf("\n");
     }

     printf("Addition of matrix A+B+C is:\n");
     for(i=0; i<r1; i++)
     {
         for(j=0; j<c1; j++)
         {
             d[i][j]=a[i][j]+b[i][j]+c[i][j];
             printf("%d\t",d[i][j]);
         }
         printf("\n");
     }
     return 0;
}
