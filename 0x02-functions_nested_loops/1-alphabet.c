#include "main.h"
#include <unistd.h>

/**
 * Print_alphabet - entry 
 *
 * programme that prints out the alphabet
 *
 */
void print_alphabet(void)
{
	char x;
	for (x = 'A'; x <= 'Z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
