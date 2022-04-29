#include "lists.h"

/**
 * pop_listint - function that delets head node of a
 * listint_t linked lists and returns the nodes data (n).
 *
 * @head: pointer to listint_t structure
 * Return: The head nodes data from deleted element.
 */
int pop_listint(listint_t **head)
{
	listint_t *NewNode;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	NewNode = (*head)->next;
	free(*head);
	*head = NewNode;

	return (n);
}


