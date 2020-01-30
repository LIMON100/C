#include<stdio.h>
#include<string.h>
int main()
{
    char dest[40];
    char ch = 't';
    memset(dest, ch, 10);

    printf("this is an example of memse %s",dest);
    return 0;
}
