#include<stdio.h>
void recurse()
{
    static int count=1;
    if(count>5)
    {
        return;
    }
    printf("count=%d\n",count);
    count=count+1;
    recurse();
}
void main()
{
   recurse();
   return 0;
}