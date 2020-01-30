#include<stdio.h>
char print(char* c)
{
    ///c[3]='A';
    while(*c!='\0')
    {
        printf("%c",*c);
        c++;
    }
    printf("\n");
}

int main()
{
    char c[20]="limon";
    print(c);
    return 0;
}
