#include "main.h"

/**
 * prints the alphabet x10 in lower case
 * followed by new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int g;

	g = 0;

	while (g < 10)
	{
		ch = 'g';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		g++;
	}
}
