#include<stdio.h>
int stk[20],i,max=15,top,item,c;

int pop()
{
    if(top==0)
    {
        printf("Stack is empty.\n");
    }
   top--;
   printf("STACK: ");
   for(i=top;i>=1;i--)
   {
       printf("%d ",stk[i]);
   }
}

int push()
{
    if(top==max)
    {
        printf("Stack is full.\n");
        return 0;
    }
    top++;
    scanf("%d",&item);
    stk[top]=item;

    for(i=top;i>=1;i--)
    {
        printf("%d ",stk[i]);
    }
}

int main()
{
    for(;;)
    {
        printf("\nEnter your choice:\n1.Push\n2.Pop\n3.Exit\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:push();
             break;
             case 2:pop();
             break;
             default:
                return 0;
        }
    }
    return 0;
}
