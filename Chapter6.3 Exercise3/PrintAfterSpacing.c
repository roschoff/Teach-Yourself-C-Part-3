#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80], *p;
	int i, j;

	printf("Enter string: ");
	gets(str);

	p = str;
	for (i = 1; p[i]; i++) {
		if (p[i-1] == ' ') {
			for (i; i < strlen(str); i++) {
				printf("%c", *(p+i));
			}
			printf("\n");
			break;
		}
	}
	return 0;
}