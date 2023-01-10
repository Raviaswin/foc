#include<stdio.h>
int main()
{
	int d,s=0,n;
	printf("enter n ");
	scanf("%d",&n);
	int t=n;
	while(n!=0)
	{
		d=n%10;
		s=s+(d*d*d);
		n/=10;
	}
	if(s==t)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
	}
