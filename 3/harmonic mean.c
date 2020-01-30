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

int lcm(int num1, int num2)
{
      int gcd = gcdofnumbers(num1, num2);
      return (num1 * num2) / gcd;
}

int main()
{
	int s,N,ca,a[100],i,value;
	scanf("%d",&s);
	for(ca=1;ca<=s;ca++)
	{
		scanf("%d",&N);
        int count=0;

		for(i=1;i<=N;i++)
		{
			scanf("%d",&a[i]);
			count++;
		}
        count=0;
        while(count < N)
        {
            value=lcm(value,a[count]);
            count++;
		}

        printf("%d\n",value);
	}

	return 0;
}
