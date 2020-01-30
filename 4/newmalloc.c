#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("Enter size of the array\n");
    scanf("%d",&n);
    int *A=(int*)calloc(n,sizeof(int));

    for(i=0;i<n;i++)
        A[i]=i+1;
      ///free(A);

    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    return 0;
}
