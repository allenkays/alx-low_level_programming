#include "lists.h"

/**
 * sum_dlistint - prints sum of all the elements a dlistint_t list
 * @head: pointer to double-linked list
 * Return: sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head == NULL)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
