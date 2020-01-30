#include<stdio.h>
int main()
{
    double gallon,litre;
    gallon=0;
    while(gallon<10){
     gallon++;
     litre=3.785*gallon;
     printf("%lf\n",litre);
    }
    return 0;
}
