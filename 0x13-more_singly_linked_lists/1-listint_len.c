#include "lists.h"

/**
 *listint_len - Returns the no. of elements in a linked list
 *@h: A pointer to the head of the list
 *
 *Return: the number of elements in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}

