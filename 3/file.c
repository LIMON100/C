#include<stdio.h>
int main()
{
    FILE *input_file;
    char limon[80];

    input_file=fopen("a.txt","w");

    gets(limon);
    fputs(limon, input_file);
    return 0;
}
