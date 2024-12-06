#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list -> frees list
 * @head: first node
 * Return: void
 */


void free_list(list_t *head)
{
	if (!head)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
