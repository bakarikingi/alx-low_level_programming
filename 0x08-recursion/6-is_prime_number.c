#include "main.h"

int actual_prime(int num, int i);

/**
 * is_prime_number - test if an int is prime or not
 * @num: number to evaluate
 *
 * Return: 1 if num is prime or 0 if not prime
 */
int is_prime_number(int num)
{
	if (num <= 1)
		return (0);
	return (actual_prime(num, num - 1));
}

/**
 * actual_prime - calculates if a num is prime recursively
 * @num: number to evaluate
 * @i: the iterator
 *
 * Return: 1 if num is prime or 0 if not
 */
int actual_prime(int num, int i)
{
	if (i == 1)
		return (1);
	if (num % i == 0 && i > 0)
		return (0);
	return (actual_prime(num, i - 1));
}
