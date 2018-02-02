#include <stdio.h>

int main(void)
{
	char str[] = "Pointers are fun";
	char *p;
	int i;
	
	p = str;

	/*traversing until null*/
	for (i = 0; p[i]; i++) {
		printf("%c", p[i]);
	}
	printf("\n");

	return 0;
}