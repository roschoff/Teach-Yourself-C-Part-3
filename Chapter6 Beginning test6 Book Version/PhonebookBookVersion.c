#include <stdio.h>
#include <string.h>

char phone[][2][40] = {
	"tate", "233426262",
	"mama", "2345632311",
	"nas", "2346112121112315",
	"dedo", "1234556",
	"", ""
};

int main(void)
{
	char name[80];
	int i;

	printf("Name? ");
	gets(name);

	for (i = 0; phone[i][0][0]; i++) {
		if (!strcmp(name, phone[i][0])) {
			printf("number: %s\n", phone[i][1]);
			break;
		}
	}
	if (!phone[i][0][0]) {
		printf("no such record\n");
	}
	return 0;
}