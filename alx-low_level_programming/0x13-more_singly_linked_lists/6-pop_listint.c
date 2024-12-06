#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* pop_listint -> free last one
* @head: head pointer
* Return: left ones
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int left;

	if (!head)
		return (0);
	temp = *head;
	left = temp->n;
	temp = temp->next;

	free(*head);
	*head = temp;

	return (left);
}
