#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,num[12];
    int i,j,total_classes,n;
    printf("Enter the total number of classes : ");
    scanf("%d",&total_classes);
    a=(int**)malloc(sizeof(int*)*total_classes);
    if(a==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    for(i=0;i<total_classes;i++)
    {
        printf("Enter number of student for class %d :",i+1);
        scanf("%d",&n);
        num[i]=n;
        a[i]=(int*)malloc(sizeof(int)*n);

        if(a==NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        for(j=0;j<n;j++)
        {
            printf("Enter marks for student %d :",j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Output\n");
    for(i=0;i<total_classes;i++)
    {
        printf("Class %d",i+1);
        for(j=0;j<num[i];j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
