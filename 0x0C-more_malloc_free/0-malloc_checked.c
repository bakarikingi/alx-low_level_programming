#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates part of memory using malloc
 * @b: number of bytes to be allocated by malloc
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
