#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *_new, *last;

	_new = malloc(sizeof(dlistint_t));
	if (_new == NULL)
		return (NULL);

	_new->n = n;
	_new->next = NULL;

	if (*head == NULL)
	{
		_new->prev = NULL;
		*head = _new;
		return (_new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = _new;
	_new->prev = last;

	return (_new);
}
