#include <stdio.h>

int main(void)
{
	char pass[80] = "tristan", input[80] = "";
	int tries = 3;

	do {
		printf("Enter password:>");
		gets(input);
		tries--;
		if (!strcmp(input, pass)) {
			printf("Log-on Successful\n");
			break;
		}
		else printf("Password Incorrect %d tries left\n", tries);
		
	} while (tries < 3);

	if (strcmp(input, pass)) {
		printf("Access Denied\n");
	}

	return 0;
}