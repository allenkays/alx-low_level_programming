#include "list.h"

/**
 * print_dlistint - prints all the elements a dlistint_t list
 * @h: pointer to double-linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t n = 0

	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
		n++;
	}
	return (n)
}
