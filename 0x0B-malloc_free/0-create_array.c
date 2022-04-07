#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 * initialiszes w specific char
 * @size: size of array to create
 * @c: char to initialize the array c
 *
 * Return: poiner to array (success), NULL  (error)
 */
char *create_array(unsigned int size, char c)
{
	char *L;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	L = (char *) malloc(sizeof(char) * size);

	if (L == NULL)
		return (0);

	while (i < size)
	{
		*(L + i) = c;
		i++;
	}
	*(L + i) = '\0';

	return (L);
}
