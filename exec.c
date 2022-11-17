#include "shell.h"

void exec(char **argv, char *copy, int state)
{
    if (fork() == 0)
    {
        if(execve(argv[0], argv, environ) == 1)
        perror("");
    }
    else
    {
        wait(NULL);
        free(copy);
        free(argv);
        if (state == 2)
			exit(1);
        prompt(1);
    }
}
