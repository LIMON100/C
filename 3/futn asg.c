#include<stdio.h>
int x=100;
int local_var();
int static_var();
int global_var();
int main()
{
    printf("first time:\n");
    local_var();
    static_var();
    global_var();
    printf("\n seconf time:\n");
    local_var();
    static_var();
    global_var();
}
int local_var()
{
    int x=1;
    printf("x=%d\n\t",x);
    x++;
    printf("x++=%d\n\t",x);
}
int static_var()
{
    int x=10;
    printf("x=%d\n\t",x);
    x++;
    printf("x++=%d\n\t",x);
}
int global_var()
{
    printf("x=%d\n\t",x);
    x++;
    printf("x++=%d\n\t",x);
}
