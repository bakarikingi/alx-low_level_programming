#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to the standard output
 * @s: the string to be printed
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
		_putchar('\n');
}
