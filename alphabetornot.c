#include <stdio.h>

int main(void) {
	char c;
	scanf("%c",&c);
	if(((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))
	printf("\nALPHABET");
	else
   printf("\nNOT A ALPHABET");	
    
	
	return 0;
}
