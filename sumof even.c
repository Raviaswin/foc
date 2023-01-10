#include<Stdio.h>
int main()
{
int s=0,n,i;
printf("Enter N :");
scanf("%d",&n);
for(i=2;i<=n;i=i+2)
{
	s=s+i;
}
printf("sum= %d",s);
}
