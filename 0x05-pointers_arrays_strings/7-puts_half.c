#include "main.h"
/**
 * puts_half - function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @s: the input string
 * Return: half of input
 */
void puts_half(char *s)
{
	int a, n, l;

	l = 0;

	for (a = 0; s[a] != '\0'; a++)
		l++;

	n = (l / 2);

	if ((l % 2) == 1)
		n = ((l + 1) / 2);

	for (a = n; s[a] != '\0'; a++)
		_putchar(s[a]);
	_putchar('\n');
}
