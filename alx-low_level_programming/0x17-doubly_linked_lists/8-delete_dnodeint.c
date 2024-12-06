#include "lists.h"
/**
 * delete_dnodeint_at_index -> delete node
 * @head: head pointer
 * @index: index
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prevNode, *nextNode;
	size_t count = 0;

	if (head == NULL)
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
			if (count == index)
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
