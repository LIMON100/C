#include<stdio.h>
int back_print()
{
    char ch;
    if (ch!='\n')
     back_print();
     return(ch);
}
int main()
{
    printf("type a line of text");
    back_print();
    return 0;
}
