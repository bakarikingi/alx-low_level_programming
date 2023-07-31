#include "main.h"
/**
 * _strspn - the mainntry point
 * @d: first input
 * @accept: second input
 * Return: (Always) 0 (Success)
 */
unsigned int _strspn(char *d, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*d)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*d == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		d++;
	}
	return (n);
}
