#include "shell.h"

void find(char **argv,char *copy)
{
	int i = 0;
	char *token = NULL, *key = "PATH", *path = NULL;
	char **env_cpy;
	struct stat st;

	while (environ[i])
		i++;

	env_cpy = malloc(sizeof(char *) * i);
	for (i = 0; environ[i]; i++)
		env_cpy[i] = strdup(environ[i]);
	env_cpy[i] = NULL;

	i = 0;
	while (env_cpy[i])
	{
		token = strtok(env_cpy[i++], "=");
		if (strcmp(key, token) == 0)
			break;
	}
	token = strtok(NULL, "\0");
	token = strtok(token, ":");

	while (token)
	{
		path = malloc(sizeof(char) * (strlen(token) + strlen(copy) + 1));
		strcat(path, token), strcat(path, "/"), strcat(path, copy);
		if (stat(path, &st) == 0)
		{
			argv[0] = strdup(path);
			exec(argv, copy);
		}
		token = strtok(NULL, ":");
	}
	perror("command not found");
    free(copy);
    free(env_cpy);
    free(path);
	prompt();
}

