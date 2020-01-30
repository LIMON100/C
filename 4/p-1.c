#include<stdio.h>
char check(char ch)
{
    if(ch>='a' && ch<='z')
        return ch;
    else
        return 0;
}
int main()
{
    char ch;
    ch=getchar();
    printf("%c\n",check(ch));
    return 0;
}
