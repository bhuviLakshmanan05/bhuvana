#include <stdio.h>
 
int main(void)
{
int n;
scanf("%d",&n);
if(n>=1&&n<=100000)
{
	if(n%2==0)
	printf("\neven");
	else
	printf("\nodd");
}
	return 0;
}
