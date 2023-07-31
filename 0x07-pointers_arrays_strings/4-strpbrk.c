#include "main.h"
/**
 * _strpbrk - the main entry point
 * @d: the input
 * @accept: input
 * Return: (Always) 0 (Success)
 */
char *_strpbrk(char *d, char *accept)
{
		int k;

		while (*d)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*d == accept[k])
			return (d);
			}
		d++;
		}

	return ('\0');
}
