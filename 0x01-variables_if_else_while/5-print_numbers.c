#include <stdio.h>

/**
 *main - Entry
 *
 * This program prints base numbers of 10 starting from zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar("\n");
	return (0);
}
