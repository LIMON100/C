#include<stdio.h>
#include<cstdio>

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

int gcd(int a1,int a2)
{
	int temp,g,x;
	if(a1<a2)
	{
	   	x=a1;
	}
	else
	{
		x=a2;
	}
	for(; x>=1; x--)
	{
		if(a1%x==0 && a2%x==0)
		{
			g=x;
			break;
		}
	}
	return g;
}

int main()
{
      int a[101], count,s,value,cs,i,N;
	  long long int l,sum;
      
      scanf("%d",&s);
      for(cs=1; cs<=s; cs++)
	  {
	      scanf("%d", &N);
	      count = 0,value=1;
	      while(count < N)
	      {
	            scanf("%d", &a[count]);
	            value = lcmofnumbers(value, a[count]);
	            count++;
	      }
	      
	      l=(value*N);
	      sum=0;
	      for(i=0;i<N;i++)
	      {
	      	sum=sum+(value/a[i]);
		  }
		  
		  if(l%2==0 && sum%2==0)
		  {
		  	while(l%2==0 && sum%2==0)
		  	{
		  		l=l/2;
		  		sum=sum/2;
			}
		  }
		  
		  if(gcd(l,sum)==1)
		  {
		  	printf("Case %d: %lld/%lld\n",cs,l,sum);
		  }
		  
       }
	  
      return 0;
}

