#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the length of list
 * @h: pointer to head of list
 *
 * Return: number of elelments
 */

size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}
