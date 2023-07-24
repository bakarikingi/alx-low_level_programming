#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * @arr: array name
 * @n: is the number of elements in the array to be printed
 * Return: arr & n
 */
void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", arr[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", arr[n - 1]);
		}
			printf("\n");
}
