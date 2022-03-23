#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
