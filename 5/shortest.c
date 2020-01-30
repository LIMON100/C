#include <stdio.h>
int main()
{
    int a[100], min, n, c, location = 1;

    printf("Enter the number of elements in array: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for (c = 0; c <n; c++)
        scanf("%d", &a[c]);

    min = a[0];

    for (c =1; c <n; c++)
    {
        if ( a[c] < min)
        {
           min = a[c];
           location = c+1;
        }
    }

    printf("\nThe Minimum element is %d and the location is %d\n", min,location);
    return 0;
}
