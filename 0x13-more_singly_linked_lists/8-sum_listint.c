#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - return sum of nodes
 * @head: pointer to node
 * Return: integer
 *
 * Description: takes head as param and return sum of nodes
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
