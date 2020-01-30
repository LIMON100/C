#include<stdio.h>
int sqr(void)
{
    int s;
    scanf("%d",&s);
    return (s*s);
}
int main()
{
   int ans;
   ans=sqr();
    printf("square is %d",ans);
}
