#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t that needs to be freed
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = *head;

	while (*head)
	{
		(*head) = (*head)->next;
		free (temp);
	}
	*head = NULL;
}

