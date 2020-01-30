#include<stdio.h>
int main()
{
    char ch;
    printf("enter your message.\n");
    ch=getche();
    while(ch!='\r');
    printf("%c",ch+1);
    ch=getche();
    return 0;
}
