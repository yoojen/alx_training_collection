#include "lists.h"

/**
 * sum_dlistint -> return sum
 * @head: head pointer
 * Return: sum of list mebers
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
