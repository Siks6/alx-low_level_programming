#include "variadic_functions.h"
/**
 * sum_them_all - function that sums all of its parameters
 * @n: number of extra params
 *
 * Return: Total sums
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int i;

	va_start(ap, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}



