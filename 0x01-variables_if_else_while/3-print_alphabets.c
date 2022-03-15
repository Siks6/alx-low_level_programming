#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry
 *
 * prints alphabet first in lower and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(toupper(x));
	}
	putchar('\n');
	return (0);
}
