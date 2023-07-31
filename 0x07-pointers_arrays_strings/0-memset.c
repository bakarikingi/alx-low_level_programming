#include "main.h"
/**
 * _memset - fill a memory location with a specific value
 * @s: starting address of memory to be filled
 * @g: the desired value to be used
 * @n: number of bytes to be altered
 *
 * Return: changed array for n bytes
 */
char *_memset(char *s, char g, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = g;
		n--;
	}
	return (s);
}
