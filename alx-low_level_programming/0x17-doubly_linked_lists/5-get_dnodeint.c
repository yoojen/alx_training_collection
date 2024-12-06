#include "lists.h"

/**
 * get_dnodeint_at_index -> return node at a pos
 * @head: head pinter
 * @index: index
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr != NULL)
	{
		if (index == count)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (ptr);
}
