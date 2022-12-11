#include "lists.h"

/**
 * dlistint_len - counts all the elements in a dlistint_t list
 * @h: pointer to double-linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
