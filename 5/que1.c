#include <stdio.h>

#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
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

insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");

    else
    {
        if (front == - 1)
        front = 0;
        printf("\nInsert the element for queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
        printf("%d is added successfully.\n",add_item);
    }
}

delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }

    else
    {
        printf("\nDeleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
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
