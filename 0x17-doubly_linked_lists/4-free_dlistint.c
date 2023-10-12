#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmz;

	while (head != NULL)
	{
		tmz = head->next;
		head = tmz
		free(tmz);
	}
}
