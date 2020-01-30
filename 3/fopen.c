#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[]="my_file.txt";
    fp=fopen(filename,"w");

    fprintf(fp,"this is a file created by a program!");
    fprintf(fp,"i am so happy.\n");
    fclose(fp);

    fp=fopen()
    fprintf(fp,"second line.\n");

    return 0;
}
