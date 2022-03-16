#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 * writes out _putchar to stdout, followed by a new line
 *
 * Return always: Always 0 (Success)
 *
 */

int main(void)
{
	char word[8] = "putchar\n";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	return (0);
}
