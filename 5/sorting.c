#include <stdio.h>
int main(){
   int no1;
   int no2;
   int no3;
   int sto;
   int hi;
   int lo;

   printf("Enter No. 1: ");
   scanf("%d", &no1);
   printf("Enter No. 2: ");
   scanf("%d", &no2);
   printf("Enter No. 3: ");
   scanf("%d", &no3);

   if (no1>no2) {
      sto=no1;
      lo=no2;
   }
    else {
      sto=no2;
      lo=no1;
   }
   if (sto>no3) {
      hi=sto;
      if(lo>no3){
         sto=lo;
         lo=no3;
      }
      else {
         sto=no3;
      }
   }
   else hi=no3;

   printf("%d %d %d", lo,sto,hi);
   return 0;
}
