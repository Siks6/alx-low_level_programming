#include "main.h"
#include <unistd.h>

/**
 * Print_alphabet - entry
 *
 * Description: A programme that prints out the alphabet in lower case.
 */
void print_alphabet(void) /*Prints out alphabet*/
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
