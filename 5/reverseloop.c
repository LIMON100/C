#include<stdio.h>

main()
{
      int n, c, k, x = 1;

      scanf("%d", &n);

      for ( c = 1 ; c <= n ; c++ )
      {
        for ( k = 1 ; k <= c ; k++ )
          {
              printf("%d", x);
              x++;
          }
          x--;

        for ( k = 1 ; k <= c - 1 ; k++ )
          {
              x--;
              printf("%d", x);
          }
           x = 1;
          printf("\n");
      }
      return 0;
}
