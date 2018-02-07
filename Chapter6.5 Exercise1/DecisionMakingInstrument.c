#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str[] = {
		"Yes", "No", "Maybe. Rephrase the question."
	};
	char input[80];

	printf("Ask your question: ");
	gets(input);
	
	printf("%s ", str[strlen(input)%3]);

	/*Alternative way of printing out the answer*/
	/*printf(str[strlen(input) % 3]);*/

	return 0;
}