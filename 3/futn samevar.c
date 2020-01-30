#include<stdio.h>
void local_1(void);
void local_2(void);
int main()
{
    int niton=3;
    local_1();
    local_2();
    printf("\n niton within main:%d",niton);
}
void local_1(void)
{
    int niton=1;
    printf("\n niton within local_1:%d",niton);
}
void local_2(void)
{
    int niton=2;
    printf("\n niton within local_2:%d",niton);
}
