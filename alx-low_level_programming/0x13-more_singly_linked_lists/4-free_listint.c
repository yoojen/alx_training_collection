#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint -> free allocated space
* @head: head pointer
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (!head)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(temp);
}
