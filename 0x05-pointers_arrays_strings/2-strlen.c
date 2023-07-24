#include "main.h"
/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: length of "s"
 */
int _strlen(char *s)
{
	int t = 0;

	while (*s != '\0')
	{
		t++;
		s++;
	}

	return (t);
}
