#include "lists.h"

/**
 * free_dlistint - free memory allocated to the doubly-linked list
 * @head: pointer to start of doubly-linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
