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
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[lest] = '\0';
	return (dest);
}
