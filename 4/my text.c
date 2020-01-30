#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[]="my_file.txt";
    fp=fopen(filename,"w");
    fprintf(fp,"this is a file crated by my program!");
    fprintf(fp,"i am so happy.\n");

    fp=fopen(filename,"a");
    fprintf(fp,"second line.\n");
    fclose(fp);
    return 0;
}
