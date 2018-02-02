#include <stdio.h>

int main(void)
{
	int i, *p;
	
	for (i = 0; i < 10; i++) {
		p = &i; /*this construction can be outside the for loop*/
		printf("%d ", *p);
	}
	return 0;
}