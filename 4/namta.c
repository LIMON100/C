#include <stdio.h>
int main()
 {
     int namta[10][10];
     int row, col,count;
     for (row = 0; row < 10; row++) {
         for(col = 0; col < 10; col++) {
             namta[row][col] = (row + 1) * (col + 1);
         }
     }
     for (row = 0; row < 10; row++) {
         for(col = 0; col < 10; col++) {
             printf("%d x %d = %d\n", (row + 1), (col + 1), namta[row][col]);
             if(namta[row][col] % 2 == 0){
                printf("%d\n",namta[row][col]);
                count++;
             }
             else{
                printf("%d\n",namta[row][col]);
                count++;
             }
         }
         printf("\n");
     }
     return 0;
 }
