#include<stdio.h>
int main()
{
    int grade[100],i,sum=0;
    float average;
    for(i=0;i<100;i++){
     printf("\n enter grade[%d]",i++);
     scanf("%d",&grade[i]);
     sum+=grade[i];
    }
    average=(float)(sum)/100.0;
    return 0;
}
