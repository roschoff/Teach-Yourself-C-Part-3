#include <stdio.h>

int main(void)
{
	int *p, q;
	p = &q;

	q = 1;
	printf("%p ", p);

	*p++;
	printf("%d %p ", q, p);

	return 0;
}