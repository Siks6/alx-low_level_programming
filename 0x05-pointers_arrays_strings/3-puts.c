#include "main.h"

/**
 * _puts - prints a string in stdout
 * @str: pointer to string that must be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
