#include<stdio.h>
#include<math.h>
int get_sqr(void)
{
    int n;
    scanf("%d",&n);
    return n*n;
}
int main()
{
    int sqr;
    sqr=get_sqr();
    printf("%d",sqr);
    return 0;
}
