#include "main.h"
/**
 * _puts_recursion - a function like puts();
 * @i: the input
 * Return: (Always) 0 (Success)
 */
void _puts_recursion(char *i)
{
	if (*i)
	{
		_putchar(*i);
		_puts_recursion(i + 1);
	}

	else
		_putchar('\n');
}
