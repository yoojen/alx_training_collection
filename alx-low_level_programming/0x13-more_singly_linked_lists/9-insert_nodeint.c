#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* insert_nodeint_at_index -> insert node at certain index
* @head: head pointer
* @idx: index
* @n: data
* Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp, *current;
	unsigned int count = 1;

	if (!head)
		return (NULL);
	ptr = *head;

	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;
	
	while (ptr != NULL)
	{
		if (idx > count)
			return (NULL);
		if (count == idx)
		{
			current = ptr->next;
			ptr->next = temp;
			temp->next = current;
		}
	++count;
	ptr = ptr->next;
	}
	return (temp);
}
