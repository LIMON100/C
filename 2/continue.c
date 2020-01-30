#include<stdio.h>
int main()
{
    int counter;
    for(counter=1;counter<=50;counter++)
    {
        if(counter % 2 == 0)
            continue;
        printf("%d",counter);
    }
    printf("\n\n odd number");
    counter=0;
    while(counter<50)
    {
       counter++;
        if(!(counter % 2))
            continue;
        printf("%d",counter)
    }
    //return 0;

}
