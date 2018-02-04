#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char *p, *p2, *p3;
	
	p = "one";
	p2 = "two";
	p3 = "three";

	while (p <= p3) {
		printf(p);
		printf("\n");
		p = p + 4;
	}

	return 0;
}