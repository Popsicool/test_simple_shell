#include "shell.h"

char* prompt(void)
{
	size_t n = 10;
	char * buffer;
	buffer = malloc(sizeof(char) * n);
	getline( &buffer, &n, stdin);
/*	printf("printed %s to output which is %ld\n", buffer, n); */
	return (buffer);
}
