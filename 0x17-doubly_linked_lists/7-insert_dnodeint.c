#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmz = *h, *_new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmz = tmz->next;
		if (tmz == NULL)
			return (NULL);
	}

	if (tmz->next == NULL)
		return (add_dnodeint_end(h, n));

	_new = malloc(sizeof(dlistint_t));
	if (_new == NULL)
		return (NULL);

	_new->n = n;
	_new->prev = tmz;
	_new->next = tmz->next;
	tmz->next->prev = _new;
	tmz->next = _new;

	return (_new);
}
