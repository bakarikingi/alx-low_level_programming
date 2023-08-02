#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if an str is palindrome
 * @str: the str
 *
 * Return: 1 if it is or 0 not
 */
int is_palindrome(char *str)
{
	if (*str == 0)
		return (1);
	return (check_pal(str, 0, _strlen_recursion(str)));
}

/**
 * _strlen_recursion - returns the length of a str
 * @str: the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen_recursion(str + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: the string to ba checked
 * @i: iterator
 * @len: the length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
