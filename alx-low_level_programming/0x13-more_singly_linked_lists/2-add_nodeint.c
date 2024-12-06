#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_nodeint -> add node beg
* @head: head pointer
* @n: data
* Return: count
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (!head)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
