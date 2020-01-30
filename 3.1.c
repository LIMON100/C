#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[]="my.txt";
    fp=fopen(filename,"w");
    fprintf(fp,"this is my name! ");
    fprintf(fp,"i am so happy.");
    fclose(fp);
    return 0;
}
