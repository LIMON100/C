#include<stdio.h>
int main()
{
    FILE *fp_i,*fp_ou;
    char *input_file="i.txt";
    char *output_file="ou.txt";
    char line[80];
    int n2,n1,sum;

    fp_i=fopen(input_file,"r");
    fp_ou=fopen(output_file,"w");

    fgets(line,80,fp_i);
    printf("Line %s\n",line);

    sscanf(line,"%d %d",&n1,&n2);

    sum=n1+n2;
    printf("%d %d %d\n",n1,n2,sum);
    fprintf(fp_ou,"%d\n",sum);

    fclose(fp_i);
    fclose(fp_ou);
    return 0;
}
