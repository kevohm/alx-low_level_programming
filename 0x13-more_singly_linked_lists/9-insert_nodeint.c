#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *prev = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		if (idx == 0)
			*head = current->next;
		return (NULL);
	}
	for(;current;current=current->next)
	{
		if (i == idx)
		{
			prev->next = newNode;
			newNode->next = current;
		}
		i++;
		prev = current;
	}
	return (newNode);
}
