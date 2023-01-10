#include<stdio.h>
int main()
{
	int a,b,t;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("after swapping:  a=%d b=%d",a,b);
	
}
