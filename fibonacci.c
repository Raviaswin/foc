#include<stdio.h>
int main()
{
	int a=0,b=1,i=2,c,n;
	printf("enter N :");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	c=a+b;
	for(i=2;i<n;i++)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}
