#include <stdlib.h>

/**
 * int_index - searches for int
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of first element for which 
 * cmp function does not return 0, or -1 if no match is found or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);
	
	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);
	
	if (i == size)
		return (-1);

	return (-1);
}
