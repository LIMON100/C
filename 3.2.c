#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[]="MY.txt";
    fp=fopen(filename,"w");
    fprintf(fp,"This is a file created by program ! ");
    fprintf(fp,"I am so happy.\n");
    fclose(fp);
    fp=fopen(filename,"a ");
    fprintf(fp,"limon\n");
    fclose(fp);
    return 0;
}
