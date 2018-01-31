#include <stdio.h>

char phonebook[5][2][30] = {
	"nas", "08825698756",
	"mama", "08865479851",
	"tate", "08875469110",
	"dedo", "087965332214",
	""
};

int main(void)
{
	char input[30];
	int i = 0;

	printf("Enter name to show number: ");
	gets(input);

	while (strcmp(phonebook[i][0], "")) {
		if (!strcmp(input, phonebook[i][0])) {
			printf("%s phonenumber: %s\n", input, phonebook[i][1]);
			break;
		}
		i++;
	}
	if (!strcmp(phonebook[i][0], "")) {
		printf("No such record!\n");
	}

	return 0;
}