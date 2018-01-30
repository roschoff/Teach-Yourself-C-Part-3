#include <stdio.h>

int main(void)
{
	int arr[10];
	int i, sumEven = 0, sumOdd = 0;

	for (i = 0; i < 10; i++) {
		printf("Enter 10 numbers: ");
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			sumEven = sumEven + arr[i];
		}
		else {
			sumOdd = sumOdd + arr[i];
		}
	}

	printf("sum of the even numbers: %d, sum of the odd numbers: %d\n", sumEven, sumOdd);

	printf("\n");
	
	return 0;
}