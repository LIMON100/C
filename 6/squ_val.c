#include<stdio.h>
int print_messege(void)
{
    printf("this is print message ()function");
}
int square_value(int value)
{
    print_messege();
    return(value*value);
}
int main()
{
    int value;
    value=square_value(5);
    printf("\n square value is %d.",value);
    return 0;
}
