#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmz = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmz == NULL)
			return (-1);
		tmz = tmz->next;
	}

	if (tmz == *head)
	{
		*head = tmz->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmz->prev->next = tmz->next;
		if (tmz->next != NULL)
			tmz->next->prev = tmz->prev;
	}

	free(tmz);
	return (1);
}
