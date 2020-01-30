#include <stdio.h>
int main()
{
    int n1, n2,max1,max2,max3, n3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
        max1=n1;

    if( n2>=n1 && n2>=n3 )
         max2=n1;

    if( n3>=n1 && n3>=n2 )
         max3=n1;


    printf("%d %d %d\n",max1,max2,max3);
    return 0;
}
