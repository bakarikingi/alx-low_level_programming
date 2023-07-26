#include "main.h"
/**
 * _strncat - concatenates the two strings using
 * at most n bytes from src
 * @dest: the input value
 * @src: the input value
 * @p: the input value
 *
 * Returns: dest
 */
char *_strncat(char *dest, char *src, int p)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
