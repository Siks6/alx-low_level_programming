#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string to search
 * @accept: string to look for
 *
 * Return: pointer to byte in s that matches byte in accept
 * or NULL if no such byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{return (s);
			}
		}
		s++;
	}
	return (NULL);
}
