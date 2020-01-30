#include<stdio.h>
int main(void)
{
    int a,b;
    char ch;
    printf("do u want to:\n");
    printf("add,subtract,multiply,or divide?\n");
    do
    {
    printf("enter first letter :");
    ch=getchar();
    }
    while(ch!='A' && ch!='M' && ch!='S' && ch!='D');
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    if(ch=='A')
        printf("%d",a+b);
    if(ch=='S')
        printf("%d",a-b);
    if(ch=='M')
        printf("%d",a*b);
    if(ch=='D' && b!=0)
        printf("%d",a/b);
    return 0;
}

