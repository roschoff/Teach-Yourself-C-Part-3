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

	/*Printing the current address values*/
	printf("%p %p %p %p ", cp, ip, fp, dp);

	/*This increments the adress by 1 byte*/
	cp++;
	ip++;
	fp++;
	dp++;

	printf("%p %p %p %p ", cp, ip, fp, dp);

	return 0;
}