#include "main.h"

/**
 * more_numbers - prints many more numbers
 */

void more_numbers(void)
{
	int d, j;

	for (d = 1; d <= 10; d++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
