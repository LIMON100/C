#include <stdio.h>
#define MAX 50
int a[MAX];
int rear = - 1;
int front = - 1;

int main()
{
    int choice;
    while (1)
    {
        printf("\n1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("3.Display \n");
        printf("4.Exit \n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    }
}

int insert()
{
    int item;
    if(rear==MAX-1)
        printf("Overflow\n");
    else
    {
        if(front==-1)
            front=0;

        scanf("%d",&item);
        rear++;
        a[rear]=item;
    }
}
int delete()
{
    if(front==-1 || front>rear)
    {
        printf("underflow\n");
    }
    else
    {
        front++;
    }
}
display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("\nQueue is :\n\n ");
        for (i = front; i <= rear; i++)
            printf("%d  ", queue_array[i]);
        printf("\n");
    }
}
