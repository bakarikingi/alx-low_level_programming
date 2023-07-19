#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to standard out-put
 * @c: The character to be printed out
 *
 * Return: On success 1
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
