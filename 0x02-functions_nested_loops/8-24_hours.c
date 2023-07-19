#include "main.h"

/**
 * jack_bauer - prints every minute spent in 24 hours
 * starting from 0000 hrs to 0059hrs
 */
void jack_bauer(void)
{
	int d, j;

	d = 0;

	while (d < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		d++;
	}
}
