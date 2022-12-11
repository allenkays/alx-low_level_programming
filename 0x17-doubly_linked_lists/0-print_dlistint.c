#include "list.h"

/**
 * print_dlistint - prints all the elements a dlistint_t list
 * @h: pointer to double-linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n)
}
