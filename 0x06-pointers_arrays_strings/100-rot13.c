#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder
 * @s: pointer to str parameters
 *
 * Return: (*s)
 */

char *rot13(char *s)
{
	int d;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (d = 0; s[d] != '\0'; d++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[d] == data1[j])
			{
				s[d] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
