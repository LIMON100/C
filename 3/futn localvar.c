#include<stdio.h>
int loc_var(ratna,nipu,roma)
{
    int ratna,nipu,roma;
    ratna=15;nipu=12;roma=11;
    printf("\n ratna:%d nipu:%d and roma:%d",ratna,nipu,roma);
}
int main()
{
    loc_var();
    pritnf("\n ratna:%d nipu:%d and roma:%d",ratna,nipu,roma);
    return 0;
}
