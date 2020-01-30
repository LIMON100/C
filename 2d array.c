#include<stdio.h>
int main()
{
    int row,col;
    int ROW=3;
    int COL=5;
    int array2d[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    for(row=0;row<ROW;row++){
        for(col=0;col<COL;col++){
            printf("\n element [%d][%d]=%d",row,col,array2d[row][col]);
        }
    }
    return 0;
}
