#include<stdio.h>
int main()
{
    int stats[7];
    int i,j,count,oldmode,mode,oldcount,num;
    printf("enter 7 number :");
    for(i=0;i<7;i++)
        scanf("%d",&stats[i]);
        oldcount=0;
    for(i=0;i<7;i++){
        mode=stats[i];
        count=0;
        for(j=i+1;j<7;j++)
            if(mode==stats[j])
            count++;
        if(count>oldcount){
            oldmode=mode;
            oldcount=count;
           }
        }
    printf("the mode is %d\n",oldmode);
    return 0;
}
