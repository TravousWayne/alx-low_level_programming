#include "main.h"

/**
 * _strcat - a function that concentrates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: a pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
