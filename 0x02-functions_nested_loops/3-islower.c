#include "main.h"

/**
 * _islower - checks for lowercase, if lowercase returns 1 if others returns 0
 * @c: An input character
 * Return: 1 if is lowercase or 0 if uppercase
 *
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}

