#include<Stdio.h>
int main()
{
int s=0,n,i;
printf("Enter N :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	s=s+(i*i*i);
}
printf("sum= %d",s);
}
