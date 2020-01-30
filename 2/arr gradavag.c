#include<stdio.h>
#define ARR_SIZE 100
int main()
{
    int grade[5]={80,85,75,90,95};
    float average;
    int i,sum=0;
    for(i=0;i<5;i++){
     sum+=grade[i];
    }
    average=(float)(sum)/5.0;
    printf("\n\n\n\n average is:%lf",average);
    return 0;
}
