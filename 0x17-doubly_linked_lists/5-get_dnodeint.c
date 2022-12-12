#include "lists.h"

/**
 * get_dnodeint_at_index - prints all the elements a dlistint_t list
 * @head: pointer to double-linked list
 * @index: index of node to return
 * Return: node index or NULL if non-existent.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index)
	{
		if (head == NULL)
			return (NULL);
		index--;
		head = head->next;
	}
	return (head);
}
