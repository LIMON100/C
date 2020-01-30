#include<stdio.h>
void pop();
void display();
void push(int);
int a[50],top=-1,n;

int main()
{
    int choice,value;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    while(1){
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("\nEnter the value to be insert: ");
		 scanf("%d",&value);
		 push(value);
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
    return 0;
}

void push(int value)
{
    if(top==n-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        a[top++]=value;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    top--;
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack underflow\n");
    }
    else{
    for(i=top; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
    }
    printf("\n");
}
