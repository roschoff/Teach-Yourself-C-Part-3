#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[80], *p;
	
	printf("Enter a string: ");
	gets(str);
	p = str;

	while (*p) {
		*p++ = toupper(*p);
	}
	printf("%s\n", str);
	
	p = str;
	while (*p)
	{
		*p = tolower(*p);
		p++;
	}
	printf("%s\n", str);

	return 0;
}