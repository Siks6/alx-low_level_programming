#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}
