#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to the standard printout
 * @c: The character to be printed to std out
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
