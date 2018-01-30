#include <stdio.h>

int main(void)
{
	char pw[80];
	int i;

	for (i = 0; i < 3; i++) {
		printf("Password: ");
		gets(pw);
		if (!strcmp("tristan", pw)) {
			break;
		}
	}

	if (i == 3) {
		printf("Access Denied\n");
	}
	else printf("Log-on Successful\n");

	return 0;
}
