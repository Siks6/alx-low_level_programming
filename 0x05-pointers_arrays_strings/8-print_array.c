#include <stdio.h>
#include <string.h>

/**
 * print_array -prints firsst n elements of array
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
		printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf("%d", a[i]);
	}
	putchar('\n');
}
