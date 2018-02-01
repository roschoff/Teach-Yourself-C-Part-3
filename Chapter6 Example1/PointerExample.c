#include <stdio.h>

int main(void)
{
	int *p, q;

	q = 199;
	p = &q;

	printf("%d %d ", *p, q);
	
	return 0;
}