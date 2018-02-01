#include <stdio.h>

int main(void)
{
	int i, *p;
	
	for (i = 0; i < 10; i++) {
		p = &i;
		printf("%d ", *p);
	}
	return 0;
}