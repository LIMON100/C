#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("day.doc","w");
    while((ch=getchar())!=EOF)
    putc(ch,fp);
    fclose(fp);
    fp=fopen("day.doc","r");
    while((ch=getc(fp))!=EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
