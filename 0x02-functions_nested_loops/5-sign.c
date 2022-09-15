#include "main.h"

/**
 * print_sign - function to check for a sign of a master
 * @n: argument passed
 * Return: 1, 0 -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
}
