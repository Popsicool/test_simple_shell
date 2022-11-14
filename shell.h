#ifndef SHELL_H
#define SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

extern char **environ;
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void prompt(void);
void tokenizer(char *buffer);
void exec(char **, char *);
void find(char **, char *);

#endif
