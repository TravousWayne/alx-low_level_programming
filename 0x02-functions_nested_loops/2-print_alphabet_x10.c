#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 *
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = o; i < 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
