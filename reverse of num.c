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
		s=s*10+d;
		n/=10;
	}
	printf("Reverse = %d",s);
	}
