#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -> add nodes
 * @head: first node
 * @str: data to be created
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;

	if (!head)
		return (NULL);
	current = malloc(sizeof(list_t));

	if (!current)
		return (NULL);
	current->str = strdup(str);
	current->len = strlen(str);

	current->next = *head;
	*head = current;

	return (*head);
}
