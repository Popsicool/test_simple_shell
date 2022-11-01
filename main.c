#include "shell.h"

int main(void)
{
	char *buffer;
	while(1)
	{
		buffer = prompt();
		tokenizer(buffer);
		free(buffer);
	}
	return (0);
}
