#include<stdio.h>
void push(int);
void pop();
void display();

int stack[10],n, top = -1;

int main()
{
   int value, choice;
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

void push(int value){
   if(top == n-1)
      printf("\nStack is Full!");
   else{
      top++;
      stack[top] = value;
      printf("%d Push successfully.\n",value);
   }
}

void pop(){
   if(top == -1)
      printf("\nStack is Empty!");
   else{
      printf("\nDeleted : %d\n\n", stack[top]);
      top--;
   }
}

void display(){
   if(top == -1)
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are: ");
      for(i=top; i>=0; i--)
	 printf("%d ",stack[i]);
   }
   printf("\n");
}
