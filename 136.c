# include<stdio.h>
# include<stdlib.h>

long long int maxDivide(long long int a,long long int b)
{
  while (a%b == 0)
   a = a/b;
  return a;
}

long long int isUgly(long long int no)
{
  no = maxDivide(no, 2);
  no = maxDivide(no, 3);
  no = maxDivide(no, 5);

  return (no == 1)? 1 : 0;
}

int getNthUglyNo(long long int n)
{
  int i = 1;
  int count = 1;

  while (n > count)
  {
    i++;
    if (isUgly(i))
      count++;
  }
  return i;
}

int main()
{
    long long int no = getNthUglyNo(150);
    printf("150th ugly no. is %lld ",  no);
    return 0;
}
