#include<stdio.h>
int main()
{
	int d,s=1,n;
	printf("enter n ");
	scanf("%d",&n);
	int t=n;
	while(n!=0)
	{
		d=n%10;
		printf("digit %d : %d  ",s,d);
		s++;
		n/=10;
	}}
