#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint2 -> free allocated space
* @head: head pointer
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
