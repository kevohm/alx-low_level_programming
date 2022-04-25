#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - remove first value
 * @head: pointer to head
 * Return: Integer
 *
 * Description: removes first node and return value of node
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *ptr = *head;

	if (*head == NULL)
		return (i);
	i = (*head)->n;
	if ((*head)->next)
	{
		*head = (*head)->next;
		free(ptr);
	}
	else
	{
		*head = NULL;
		free(ptr);
	}
	return (i);

}
