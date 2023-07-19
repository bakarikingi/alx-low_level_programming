#include "main.h"

/**
 * check if the letter is lowercase
 * @c: is the letter to be checked
 * Return: 1 if the letter is lowercase, otherwise return 0.
 */

int _islower(int j)
{
	if (j >= 'a' && j <= 'z')
		return (1);
	else
		return (0);
}
