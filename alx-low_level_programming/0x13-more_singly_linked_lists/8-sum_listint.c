#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* sum_listint -> return sum
* @head: head pointer
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
