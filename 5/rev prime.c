#include <stdio.h>
main()
{
    int i = 10, j, c, sum, b, x, d, e, z, f, g;

    printf("\nPrime numbers from 10 to 99 are the follwing:\n");

    while (i <= 99)
    {
        c=0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) c++;
        }

        if (c == 2)
        {
            b = i;
            d = b / 10;
            e = b - (10 * d);
            x = (e * 10) + d;

            {
                z = 0;
                f = x;

        for (j = 1; j <= f; j++)
            {
                if (f % j == 0) z++;
            }
                if (z == 2)
                {
                    printf("%d %d\n", i, f);
                }
            }
        }

        i++;
    }
}
