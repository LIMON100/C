#include<stdio.h>
int main()
{
    int row=0;
    int col=0;
    int size=0;
    int sumabove=0;
    int sumbelow=0;
    int matrix[5][5];
    printf("\n matrix size ?");
    scanf("%d", &size);
    printf("\n enter matrix element....\n");
    for(row=1;row<size+1;row++)
    {
      for(col=1;col<size+1;col++)
      {
        printf("    element[%d][%d]:",row,col);
        scanf("%d",matrix[row][col]);
      }
      printf("\n");
    }
  printf("the given matrix is:\n");
  for(row=1;row<size+1;row++){
    for(col=1;col<size+1;col++){
     printf("%4d",matrix[row][col]);
    }
    printf("\n");
  }
  printf("diagonal elements are:");
  for(row=1;row<size+1;row++){
   for(col=1;col<size+1;col++){
    if(row==col)
      printf("%4d",matrix[row][col]);
   }
  }
  printf("elements above the main diagonal:");
   for(row=1;row<size+1;row++)
   {
    for(col=1;col<size+1;col++)
    {
        if(row<col)
      {
        printf("%4d",matrix[row][col]);
        sumabove+=matrix[row][col];
    }
   }
  }
  printf("elements below the main diagonal:");
   for(row=1;row<size+1;row++)
   {
    for(col=1;col<size+1;col++)
    {
        if(row>col)
      {
        printf("%4d",matrix[row][col]);
        sumbelow+=matrix[row][col];
    }
   }
  }
  printf("\n sum of elements above the main diagonal:%d\n\ below the main diagonal:%d\n",sumabove,sumbelow);
  return 0;
}

