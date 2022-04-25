#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node to the end
 * @n: integer
 * @head: pointer to head(pointer to node)
 * Return: instanceof list_t
 *
 * Description: add newNode to end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;
	}
	return (newNode);
}
