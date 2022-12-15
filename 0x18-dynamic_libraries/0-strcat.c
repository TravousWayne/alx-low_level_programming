#include "main.h"
#include <string.h>

/**
 * _strcat - a function that concentrates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: a pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
