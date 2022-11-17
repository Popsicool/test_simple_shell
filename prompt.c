#include "shell.h"

void prompt(int state)
{
	char *buffer = NULL;
	size_t n;
	int a;

	if (state == 1)
		write(1, "My shell : ", 11);
	a = getline(&buffer, &n, stdin);
	if (a == -1)
	{
		free(buffer);
		exit(0);
	}
	if (state == 1)
		tokenizer(buffer, 1);
	else
		tokenizer(buffer, 2);
}
