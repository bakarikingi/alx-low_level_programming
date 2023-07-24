#include "main.h"
/**
 * swap_int - swaps two integers
 * @j: integer to be swapped
 * @k: integer to be swapped
 */
void swap_int(int *j, int *k)
{
	int m;

	m = *j;
	*j = *k;
	*k = m;
}
