#include<stdio.h>
int main()
{
    int i=12,j,count;
    while(i<10000)
    {
        count=0;
        for(j=1;j<=10;j++)
        {
            if(i%j==0)
             {
                count++;
             }

            else if(count==10)
            {
                printf("%d\n",i);
                break;
            }
        }
        i=i+2;
    }

    return 0;
}
