#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80], *p;

	printf("Enter a string: ");
	gets(str);

	p = str;

	/*p is increasing so that is points to the next symbol, until a spacing is met*/
	while (*p && *p != ' ') {
		p++;
	}
	printf(p);
	printf("\n");

	return 0;
}