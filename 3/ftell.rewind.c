#include<stdio.h>
int main()
{
    FILE *fp;
    int n;
    char s[10];
    fp=fopen("Raman.txt","r+");

    fgets(s,30,fp);
    printf("file content %s ",s);

    fseek(fp,8,0);
    fputs("c programming language.",fp);

    rewind(fp);

    fgets(s,35,fp);
    printf("file content %s",s);

    n=ftell(fp);
    printf("Total size of file: %d bytes",n);
    fclose(fp);

    return 0;
}
