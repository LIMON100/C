#include<stdio.h>
typedef struct
{
    int roll;
    char name[20];
    float marks;
}
student;
int main()
{
    student s[10];
    int i;
    for(i=0; i<3; i++)
    scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
    for(i=0; i<3; i++)
    printf("name=%s roll=%d marks=%0.2f\n",s[i].name,s[i].roll,s[i].marks);
    return 0;
}
