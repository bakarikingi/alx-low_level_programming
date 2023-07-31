#include "main.h"
/**
 * _strchr - the main entry point
 * @f: first input
 * @c: second input
 * Return: (Always) 0 (Success)
 */
char *_strchr(char *f, char c)
{
	int i = 0;

	for (; f[i] >= '\0'; i++)
	{
		if (f[i] == c)
			return (&f[i]);
	}
	return (0);
}
