#include<stdio.h>
int main()
{
    int ans,count,chances,right;
    for(count=1;count<=11;count++){
        printf("%d + %d?",count,count);
         scanf("%d",&ans);
         if(ans==count+count)
            printf("right ");
         else{
            printf("wrong");
           printf("try again");
           right=0;
           for(chances=0;chances<3 && right ;chances++){
            printf("%d +%d?",count,count);
            scanf("%d",&ans);
            if(ans==count+count){
                printf("right\n");
             right=1;
            }
        }
        if(right)
            printf("the number is %d.\n",count +count);
         }
    }
    return 0;
}
