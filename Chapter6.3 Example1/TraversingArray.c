#include <stdio.h>

int main(void)
{
	int a[10] = { 10, 20 , 30, 40, 50, 60, 70, 80, 90, 100 };
	int *p;

	p = a; /*declaring p with the beginning of the array*/

	printf("%d %d %d\n", *p, *(p + 1), *(p + 2)); /*printing elements from a*/

	printf("%d %d %d\n", a[0], a[1], a[2]);/*printing elements from a*/

	return 0;
}