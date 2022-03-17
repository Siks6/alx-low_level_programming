#include "main.h"

/**
 * print_sign - check main
 * @n: an input number
 * Desc: prints the sign of a number
 * Return: 1 is positive, 0 if 0,
 * -1 if negative
 */
int print_sign(int n)
{
	int value;

		if (n > 0)
		{
			value = 1;
			_putchar('+');
		}
		else if (n == 0)
		{
			value = 0;
			_putchar('0');
		}
		else
		{
			value = -1;
			_putchar('-');
		}
	return (value);
}
