#include "shell.h"

void exec(char **argv, char *copy)
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
        prompt();
    }
}