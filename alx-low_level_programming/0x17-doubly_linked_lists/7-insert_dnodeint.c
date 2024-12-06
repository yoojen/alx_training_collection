#include "lists.h"

/**
* insert_dnodeint_at_index -> insert
* @h: head pointer
* @idx: indx
* @n: number
* Return: nwe node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *ptr, *prevNode;
	size_t count = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	ptr = *h;
	if (idx == 0)
	{
		if (*h == NULL)
			*h = newNode;
		else
		{
			newNode->next = ptr;
			ptr->prev = newNode;
			*h = newNode;
		}
		return (newNode);
	}
	while (ptr != NULL)
	{
		if (idx == count)
		{
			prevNode = ptr->next;
			ptr->next = newNode;
			newNode->next = prevNode;
			newNode->prev = ptr;
			prevNode->prev = newNode;
		}
		count++;
		ptr = ptr->next;
	}
	return (newNode);
}
