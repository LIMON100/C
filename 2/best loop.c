#include<stdio.h>
int main()
{
    int loop,num,c,no,space;
    scanf("%d",&no);
    space=no;
    for(loop=1;loop<=no;loop++)
    {
        num=loop;
        for(c=1;c<=space;c++){
            printf(" ");
        }
        space--;
        for(c=1;c<=loop;c++){
            printf("%d",num);
            num++;
        }
        num--;
        num--;
        for(c=1;c<loop;c++){
            printf("%d",num);
        num--;
        }
        printf("\n");
    }
    return 0;
}
