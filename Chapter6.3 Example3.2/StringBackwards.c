#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[11] = "0123456789";
	char str2[11], *p1, *p2;

	/*p is pointing to the end of str*/
	p1 = str1 + strlen(str1)-1;
	
	p2 = str2;
	while (p1 >= str1) {
		*p2++ = *p1--;
	}
	/*null terminates str2*/
	*p2 = '\0';

	printf("%s %s ", str1, str2);
}