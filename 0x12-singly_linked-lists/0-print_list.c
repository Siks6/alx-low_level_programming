#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: is the pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int p = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else 
		{
			printf("[%d] %s \n", h->len, h->str);
		}
		h = h->next;

		p++;
	}
	return (p);
}
