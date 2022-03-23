#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer of first value
 * @b: pointer of second
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
