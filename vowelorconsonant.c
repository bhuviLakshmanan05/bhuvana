#include <stdio.h>

int main(void) {
	
	char c;
	scanf("%c",&c);
	
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='O'||c=='I'||c=='U')
	printf("\n vowel");
	else
	printf("\nconsonant");
	
	return 0;
}
