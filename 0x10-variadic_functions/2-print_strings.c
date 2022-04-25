#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *hold;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		hold = va_arg(ap, char*);
		if (hold == NULL)
			printf("(nil)");
		else
			printf("%s", hold);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}

