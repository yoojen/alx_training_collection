#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint -> add node at beg
 * @head: head pointer
 * @n: data to be added to list
 * Return: New node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *ptr;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;

	ptr = *head;
	*head = newNode;
	newNode->next = ptr;

	if (ptr != NULL)
		ptr->prev = *head;

	return (newNode);
}
