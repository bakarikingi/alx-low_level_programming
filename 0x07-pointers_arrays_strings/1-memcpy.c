#include "main.h"
/**
 *_memcpy - copies a memory area a backup
 *@dest: memory where it is stored
 *@src: memory where it is copied from
 *@m:the number of bytes
 *
 *Return: copied memory with n bytes altered
 */
char *_memcpy(char *dest, char *src, unsigned int m)
{
	int r = 0;
	int i = m;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		m--;
	}
	return (dest);
}
