#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	long int c,lne,i,j,len,l[200];
	int cs,k,t;
	double price;
    char text[10000],x[200];
    scanf("%d",&t);
    for(cs=1; cs<=t; cs++)
    {
    	price=0;
    	scanf("%d",&k);
    	for(i=0; i<k; i++)
    	{
    		scanf("%c%d",&x[i],&l[i]);
		}

		scanf("%d",&lne);
		for(i=0; i<lne; i++)
		{
			gets(text);
			len=strlen(text);
			for(c=0;c<k;c++)
			{
				for(j=0; j<len; j++)
				{
					if(x[i]==text[j])
					{
						price=price+l[c];
					}
				}
			}
		}

		printf("%.2lf\n",price/100);
	}

	return 0;

}
