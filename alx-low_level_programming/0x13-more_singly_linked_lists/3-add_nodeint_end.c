#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint_end -> add node end
* @head: head pointer
* @n: data
* Return: count
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeEnd, *ptr;

	ptr = *head;
	if (!head)
		return (NULL);

	nodeEnd = malloc(sizeof(listint_t));
	if (!nodeEnd)
		return (NULL);
	nodeEnd->n = n;
	nodeEnd->next = NULL;

	if (*head == NULL)
	{
		*head = nodeEnd;
		return (nodeEnd);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = nodeEnd;

	return (nodeEnd);
}
