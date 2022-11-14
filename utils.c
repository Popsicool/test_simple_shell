#include "shell.h"
/**
 *_strcpy - copies the string pointed to by src
 *@dest: A pointer to a char that will be changed
 *@src: A pointer to a char that will be changed
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/**
 * _strlen - func to check length of string
 * Description: print length of strings
 * @s: character to check its length
 * Return: length of the string
 */
int _strlen(char *s)
{
    int a = 0;
    while (s[a] != '\0')
    {
        a++;
    }
    return (a);
}