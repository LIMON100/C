#include<stdio.h>

int gcdofnumbers(int val1, int val2)
{
      int temp;
      if(val1 > val2)
      {
            temp = val1;
            val1 = val2;
            val2 = temp;
      }
      if(val2 % val1 == 0)
      {
            return val1;
      }
      else
      {
            return gcdofnumbers(val2 % val1, val1);
      }
}

int lcmofnumbers(int num1, int num2)
{
      int gcd = gcdofnumbers(num1, num2);
      return (num1 * num2) / gcd;
}

int main()
{
      int array[20], count, limit, value = 1;
      scanf("%d", &limit);
      count = 0;
      while(count < limit)
      {
            scanf("%d", &array[count]);
            count++;
      }
      count = 0;
      while(count < limit)
      {
            value = lcmofnumbers(value, array[count]);
            count++;
      }
      printf("\nLCM of given numbers = %d\n", value);
      return 0;
}
