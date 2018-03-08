#include <stdio.h>

int main(void) {
	int a,b,c,big;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	 big=a;
	 else if(b>c)
	 big=b;
	 else
	 big=c;
	 printf("\n%d",big);
	   
	return 0;
}
