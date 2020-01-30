#include<stdio.h>

struct new
{
    int id;
    char name[20];
    float cgpa;
};

int main()
{
    struct new a[10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d%f",a[i].name,&a[i].id,&a[i].cgpa);
    }
    for(i=0;i<n;i++)
    {
        printf("Name=%s, ID=%d, CGPA=%.2f\n",a[i].name,a[i].id,a[i].cgpa);
    }
    return 0;
}
