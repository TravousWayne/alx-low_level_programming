#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 *
 */

void print print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = o; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}