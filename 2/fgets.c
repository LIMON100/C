#include<stdio.h>
int main()
{
    FILE *fp_in,*fp_out;
    char *input_file="in.txt";
    char *output_file="out.txt";
    char line[80];
    int n1,n2,sum;

    fp_in=fopen(input_file,"r");
    fp_out=fopen(output_file,"w");

    fgets(line,80,fp_in);
    printf("line: %s\n",line);

    sscanf(line,"%d %d",&n1,&n2);

     sum=n1+n2;
     printf("%d %d %d\n",n1,n2,sum);
     fprintf(fp_out,"%d\n",sum);

     fclose(fp_in);
     fclose(fp_out);

     return 0;
}
