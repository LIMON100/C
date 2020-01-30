#include<stdio.h>
int main()
{
    FILE *fp;
    int r;
    char name[10];
    fp=fopen("stdent","w");
    printf("enter studet roll:\n");
    scanf("%d",&r);
    printf("enter stuent name:\n");
    scanf("%s",name);

    fprintf(fp,"%d %s",r,name);
    fclose(fp);

    fp=fopen("stuent","r");

    fscanf(fp,"%d%s",&r,name);

    printf("stuent roll:%d\n",r);
    printf("student name:%s",name);
    fclose(fp);

    return 0;
}
