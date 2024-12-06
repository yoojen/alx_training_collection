#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_count -> returns number of nods
 * @head: head pointer
 * Return: number of nodes
 */
int list_count(listint_t **head)
{
	listint_t *ptr;
	int count = 0;

	if (!head)
		return (0);
	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
/**
 * is_palindrome ->check if linked list is a palindrome
 * @head: head pointer
 * Return: 1 or 0
 */
int is_palindrome(listint_t **head)
{	int i;
	int start = 0, len = list_count(head);
	int mid = len / 2;
	listint_t *st, *end;

	while ((start != mid))
	{
		st = end = *head;
		for (i = 0; i < start; i++)
			st = st->next;
		for (i = 0; i < len - (start + 1); i++)
			end = end->next;
		if (st->n != end->n)
			return (0);

		start++;
	}
	return (1);
}
