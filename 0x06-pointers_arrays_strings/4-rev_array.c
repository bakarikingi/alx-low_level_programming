#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: the array to reverse
 * @n: length of the array
 *
 * Returns: (void)
 */
void reverse_array(int *b, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = b[i];
		b[i] = b[n];
		b[n] = t;
	}
}
