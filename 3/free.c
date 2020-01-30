#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks;
    int i,n;
    printf("enter the number of students:");
    scanf("%d",&n);
    marks=(int *)malloc(sizeof(int )*n);
    if(marks==NULL)
    {
        printf("memory alllocation faled for marks\n");
        return 1;
    }
    printf("enter the marks of each students:\n");
    for(i=0; i<n ;i++)
    {
        scanf("%d",marks[i]);
    }
    printf("Now here u can see the values:\n");
    for(i=0; i<n; i++){
        printf("%d\n",marks[i]);
    }
    free(marks);
    return 0;

}
