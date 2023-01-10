#include<Stdio.h>
int main()
{
int s=1,n,i;
printf("Enter N :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	s=s*i;
}
printf("Factorial= %d",s);
}
