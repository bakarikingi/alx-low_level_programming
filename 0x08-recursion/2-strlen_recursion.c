#include "main.h"
/**
 * _strlen_recursion - Returns the length of a word.
 * @w: The word to be measured.
 *
 * Return: The length of the word
 */
int _strlen_recursion(char *w)
{
	int longint = 0;

	if (*w)
	{
		longint++;
		longint += _strlen_recursion(w + 1);
	}

	return (longint);
}
