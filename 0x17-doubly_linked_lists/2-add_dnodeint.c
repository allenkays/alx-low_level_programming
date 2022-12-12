#include "lists.h"

/**
 * add_dnodeint - add node to beginning of dlistint_t list.
 * @head: pointer to head of the dlistint_t list
 * @n: interger to add to doubly linked list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
