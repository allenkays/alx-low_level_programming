#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *end;

	if (head == NULL || *head == NULL)
		return (NULL);

	end = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = ahead;
	}

	(*head)->next = end;

	return (*head);
}
