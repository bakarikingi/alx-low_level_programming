#include "main.h"

/**
 * _isupper - checks if the charatcter is uppercase
 * @c: the character to be check
 *
 * Return: either 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
