#include <stdio.h>

/**
 * main -> A function that prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: An array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
