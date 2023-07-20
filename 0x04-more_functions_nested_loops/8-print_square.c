#include "main.h"

/**
 * print_square - prints a square,
 * followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int d, j;

		for (d = 0; d < size; d++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
