#include <stdio.h>
int Q[10]={0,0,0,0,0,0,0,0,0,0},i, max=5,f=0,r=0;item,c;

int qins()
{
    if((f==1&&r==max)||(f==r+1))
    {
        printf("Queue is full");
        return 0;
    }

    if (f==0&&r==0)
    {
        f=1;r=1;
    }

    else if(r==max)
        r=1;

    else
    {
        r=r+1;
    }

    printf("\nEnter new item for insert: ");
    scanf("%d",&item);
    Q[r]=item;

    printf("\nQueue:\n");
    for(i=1;i<=max;i++)
    {
        printf("%5d",Q[i]);
    }
}

int main()
{
    for(;;)
    {
        printf("\nEnter your choice:\n1. QINSERT\n2. QDELETE\n3. Exit\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            qins();
            break;
        case 2:
            qdel();
            break;
        default:
            return 0;
        }
    }
    return 0;
}
