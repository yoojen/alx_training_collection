#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_node -> insert node in list
 * @head: head pointer
 * @number: data to be inseerted on node
 * Return: new node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newNode, *ptr, *prev;
	if  (!head)
		return (NULL);
	ptr = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = number;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	if (ptr->n > number)
	{
		newNode->next = ptr;
		*head = newNode;
		return (newNode);
	}
	while (ptr->next != NULL)
	{
		if ((newNode->n > ptr->n) && (newNode->n < ptr->next->n))
		{
			prev = ptr->next;
			ptr->next = newNode;
			newNode->next = prev;
			return (newNode);
		}
		ptr = ptr->next;
	}
	ptr->next = newNode; /*adds at the end*/
	return (newNode);
}
