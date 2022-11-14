#include "shell.h"

void prompt(void)
{
	char *buffer = NULL;
	size_t n;
	int a;

	write(1, "My shell : ", 11);
	a = getline(&buffer, &n, stdin);

	if (a == -1)
	{
		free(buffer);
		exit(0);
	}
	tokenizer(buffer);
}
