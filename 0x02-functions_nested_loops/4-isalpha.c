#include "main.h"

/**
 * checks if the input is a letter of the alphabet
 * @b: is the input to be checked
 * Return: 1 if b is a letter, otherwise return 0
 */
int _isalpha(int b)
{
	return ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'));
}
