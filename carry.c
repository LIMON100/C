#include<stdio.h>
int main()
{
    int a,b,c,x,y,sum,count;
    while(scanf("%d %d",&a,&b))
     {
        if(a==0 && b==0){
            break;
        }
        c=0,count=0;
        while(a!=0 && b!=0){
            x=a%10;
            y=b%10;
            a=a/10;
            b=b/10;
            sum=x+y+c;
            if(sum>9){
                 count++;
            }
        }
           if(count==0)
            printf("no carry operation.");
           else if(count==1)
            printf("%d carry operation.",count);
            else
                printf("%d carry operations.",count);
     }
        return 0;
}

