#include "lists.h"

/**
 * add_dnodeint_end -> adds node at end
 * @head: head poimter
 * @n: data
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *ptr;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	ptr = *head;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = newNode;
	newNode->prev = ptr;
	return (newNode);
}
