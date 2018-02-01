#include <stdio.h>

int main(void)
{
	int *p, q;
	
	p = &q;
	*p = 199;

	printf("q's value is %d ", q);

	return 0;
}