#include "main.h"

/**
 * factorial - returns the factorial of an int
 * @n: int to return the factorial from
 *
 * Return: factorial of int n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
