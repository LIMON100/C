////Project
///group=Error404 
///Roll-18, 09, 45, 48, 06, 07

#include<stdio.h>
int main()
{
	int a[100],i,sum=0,n,new_t,retired;
	///There are 30 teachers
	n=30;
	
    //After 3 teachers retired there are now 27 teachers
    retired=3;
    
	//6 new teachers are joined in the college same year
	new_t=6;
	printf("So now the No. of teachers in the college is: ");
	for(i=0; i<n-retired+new_t; i++)
	{
		sum=sum+1;
	}
	printf("%d",sum);
	return 0;
}
