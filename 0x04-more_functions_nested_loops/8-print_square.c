#include"main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
}
