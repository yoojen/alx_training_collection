#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index -> delete node at certain index
* @head: head pointer
* @index: index
* Return: data deleted
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode, *nextNode;
	unsigned int count = 0;

	if (!head)
		return (-1);
	prevNode = *head;
	nextNode = *head;
	if (index == 0)
	{
		*head = prevNode->next;
		free(prevNode);
		prevNode = NULL;
	}
	else
	{
		while (index != 0)
		{
			if (index == count)
			{
				prevNode->next = nextNode->next;
				free(nextNode);
				nextNode = NULL;
			}
			prevNode = nextNode;
			nextNode = nextNode->next;
			index--;
		}
	}
	return (1);
}
