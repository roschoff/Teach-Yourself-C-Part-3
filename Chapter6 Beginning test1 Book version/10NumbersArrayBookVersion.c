#include <stdio.h>

int main(void)
{
	int num[10], i, even, odd;
	
	printf("Enter 10 integers: ");

	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	even = 0; odd = 0;
	for (i = 0; i < 10; i++) {
		if (num[i] % 2) {
			odd = odd + num[i];
		}
		else even = even + num[i];
	}
	printf("Sum of even numbers: %d\n", even);
	printf("Sum of odd numbers: %d\n", odd);

	return 0;
}