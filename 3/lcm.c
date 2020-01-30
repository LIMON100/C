#include<stdio.h>

int a[10][10],b[10][10],row,col,c[10][10];
int i=0,j=0,k=0;
int r1,c1,r2,c2;
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
            if(b[i][j]=='a'||'b'||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'w'||'x'||'y'||'z'||'A'||'B'||'C'||'D'||'E'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'O'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z')
            {
                printf("Enter digit :");
            }
              printf("Enter Element [%d][%d]:",i,j);
              scanf("%d",&b[i][j]);
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

     for (col=0; col < c1; col++)
     {
         for (row=0; row < r1; row++)
         {
            c[row][col]=a[row][col]+b[row][col];
         }
     printf("\n");
     }
     return 0;
}

