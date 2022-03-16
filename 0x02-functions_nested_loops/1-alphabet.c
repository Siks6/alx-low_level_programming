#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - entry 
 *
 * programme that prints out the alphabet
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int x;
	for (x = 'A'; x <= 'Z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
