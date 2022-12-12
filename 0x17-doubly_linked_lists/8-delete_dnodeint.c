#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node from a dlistint_t at index.
 * @head: pointer to head of the dlistint_t.
 * @index: index of the node to delete.
 * Return: on success - 1 or -1 on fail.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	size_t size = 0;

	if (!*head)
		return (-1);
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}
	if (size < index + 1)
		return (-1);
	tmp = *head;
	if (!index)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	while (index--)
		tmp = tmp->next;
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
