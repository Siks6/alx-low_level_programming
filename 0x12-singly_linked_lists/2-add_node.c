#include "lists.h"

/**
 * add_node - adds a new node at beginning of linked list
 * @head: double pointer to list_t list
 * @str: new string to add to node.
 *
 * Return: the address of the new element, or NULL if fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return(NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;

	return(*head);
}
