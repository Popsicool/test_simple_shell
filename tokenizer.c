#include "shell.h"

void tokenizer(char *buffer)
{
	char *delim = " ";
	char *argv[] = {NULL, "-l", NULL};
	argv[0] = strtok(buffer, delim);
	argv[1] = strtok(NULL, delim);
	execve(argv[0], argv, NULL);
}
