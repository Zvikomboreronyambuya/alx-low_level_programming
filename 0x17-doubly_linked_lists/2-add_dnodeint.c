#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *_new;

	_new = malloc(sizeof(dlistint_t));
	if (_new == NULL)
		return (NULL);

	_new->n = n;
	_new->prev = NULL;
	_new->next = *head;
	if (*head != NULL)
		(*head)->prev = _new;
	*head = _new;

	return (_new);
}
