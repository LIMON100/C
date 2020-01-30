#include<stdio.h>
int main()
{
    int niton=10;
    printf("\n outsidr the block niton=%d.",niton);
    if(niton<=10){
      int niton=20;
      printf("\n inside the block niton=%d.",niton);
    }
    printf("\n at the end niton is %d.",niton);
    return 0;
}
