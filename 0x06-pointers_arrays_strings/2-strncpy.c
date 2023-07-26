#include "main.h"
/**
 * _strncpy - copies an str
 * @dest:the input value
 * @src: the input value
 * @m: the input value
 *
 * Returns: (dest)
 */
char *_strncpy(char *dest, char *src, int m)
{
	int j;

	j = 0;
	while (j < m && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < m)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
