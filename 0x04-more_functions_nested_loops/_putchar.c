#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 * @c: The character to be printed
 *
 * Returns: On success 1.
 * On error, -1 is returned, and error no is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
