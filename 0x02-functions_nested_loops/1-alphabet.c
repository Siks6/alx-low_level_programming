#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Prints alphabet in the lowercase.
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
