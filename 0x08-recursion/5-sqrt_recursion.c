#include "main.h"

int actual_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @num: number to find the square root of
 *
 * Return: the square root of num
 */
int _sqrt_recursion(int num)
{
	if (num < 0)
		return (-1);
	return (actual_sqrt_recursion(num, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a num
 * @num: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int num, int i)
{
	if (i * i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (actual_sqrt_recursion(num, i + 1));
}
