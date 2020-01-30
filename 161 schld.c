#include<stdio.h>
#include<conio.h>
int main()
{
    char words[10][10]={"one","two","three","four","five","six","seven","eight","nine","ten"};
    int i,j;
    char sum;
    printf("enter number :");
    num=getche();
    printf("\n");
    num=num-0;
    if(num>0 && num<10)
        printf("%s",words[num]);
    return 0;
}
