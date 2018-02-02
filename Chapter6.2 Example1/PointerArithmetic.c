#include <stdio.h>

int main(void)
{
	char *cp, ch;
	int *ip, i;
	float *fp, f;
	double *dp, d;

	cp = &ch;
	ip = &i;
	fp = &f;
	dp = &d;

	/*Printing the current values*/
	printf("%p %p %p %p ", cp, ip, fp, dp);

	/*Incrementing by 1*/
	cp++;
	ip++;
	fp++;
	dp++;

	printf("%p %p %p %p ", cp, ip, fp, dp);

	return 0;
}