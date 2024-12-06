#include "lists.h"

/**
 * free_dlistint -> return none
 * @head: head pointer
 * Return: nnone
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
}
