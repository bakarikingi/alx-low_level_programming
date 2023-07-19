#include "main.h"

/**
 * print_sign - prints out the sign of a number
 * @n: the number to check
 * Returns 1 and prints + if number is greater positive
 * prints 0 if n is zero
 * -prints - if n is less negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
}
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
